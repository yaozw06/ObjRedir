// filename: ObjRedir.cpp uintx_t
// tested in g++ and msvc


//#include <string.h>
#include <iostream>

template<typename T1>
class ObjRedir
{
public:
	ObjRedir(T1 *initValue = nullptr);
	~ObjRedir();
private:
	struct ObjPtr {
		T1 *data;
		ObjPtr(T1 *initValue);
		~ObjPtr();
	} ptr; // ptr of this ObjRedir
public:
	//代理类用于区分operator[]的读写操作.
	class Proxy { // proxies for Obj
	public:
		Proxy(ObjRedir& obj, int index); // 
		Proxy& operator=(T1 c); // uses
		operator T1() const;
	private:
		ObjRedir& self;
		int index;
	};
	const Proxy operator[](int index) const; // for const 
	Proxy operator[](int index); // for non-const 
	friend class Proxy;
};

template<typename T1>
ObjRedir<T1>::ObjRedir(T1 *initValue) : ptr(initValue)
{
	std::cout<< "ObjRedir::ObjRedir():ptr()"<< std::endl;
}

template<typename T1>
ObjRedir<T1>::~ObjRedir()
{
	std::cout<< "ObjRedir::~ObjRedir()"<< std::endl;
}

template<typename T1>
ObjRedir<T1>::ObjPtr::ObjPtr(T1 *initValue)
{
	std::cout<< "ObjPtr::ObjPtr(T1))"<< std::endl;
	data = initValue;
}

template<typename T1>
ObjRedir<T1>::ObjPtr::~ObjPtr()
{
	std::cout<< "ObjPtr::~ObjPtr())"<< std::endl;
}

template<typename T1>
typename ObjRedir<T1>::Proxy& ObjRedir<T1>::Proxy::operator=(T1 c)
{
	std::cout<< "="<< std::endl;
	//self.ptr.data[index] = c; // replace this  with other access
	return *this;
}

template<typename T1>
const typename ObjRedir<T1>::Proxy ObjRedir<T1>::operator[](int index) const
{
	std::cout<< "Proxy::[]const"<< std::endl;
	return Proxy(const_cast<ObjRedir&>(*this), index);
}

template<typename T1>
typename ObjRedir<T1>::Proxy ObjRedir<T1>::operator[](int index)
{
	std::cout<< "Proxy::[]"<< std::endl;
	return Proxy(*this, index);
}

template<typename T1>
ObjRedir<T1>::Proxy::Proxy(ObjRedir& obj, int index) : self(obj), index(index)
{
	std::cout<< "Proxy::Proxy:self(), index()"<< std::endl;
}

template<typename T1>
ObjRedir<T1>::Proxy::operator T1() const
{
	std::cout<< "Proxy::()"<< std::endl;
	return index;//self.ptr.data[index]; //  redirect this access if nessary
}

#include "stm32f1xx_ptr.h"
#include "stm32f1_can_regs.h"
using namespace std;
//  g++ -ID:/worksapce/STM32CubeF1-master/Drivers/CMSIS/Device/ST/STM32F1xx/Include -ID:/worksapce/STM32CubeF1-master/Drivers/CMSIS/Include -DSTM32F103xB  objRedir.cpp
int main()
{
	//uint32_t u32A[10];
	//uint16_t u16B[10];
	ObjRedir<uint32_t> adc1_regs(ADC1_U32_PTR);//u32A
	ObjRedir<uint16_t> usb_r16s(USB_U16_PTR);//u16B
	cout << adc1_regs[ADC_(SR)]<<endl; //调用Proxy::operator char() const;
	usb_r16s[USB_(EP0R)] = 'x';	//调用Proxy &operator=(char c);
	return 0;
}
