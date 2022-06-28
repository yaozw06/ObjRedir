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
}

template<typename T1>
ObjRedir<T1>::~ObjRedir()
{
}

template<typename T1>
ObjRedir<T1>::ObjPtr::ObjPtr(T1 *initValue)
{
	data = initValue;
}

template<typename T1>
ObjRedir<T1>::ObjPtr::~ObjPtr()
{
}

template<typename T1>
typename ObjRedir<T1>::Proxy& ObjRedir<T1>::Proxy::operator=(T1 c)
{
	self.ptr.data[index] = c; // replace this  with other access
	return *this;
}

template<typename T1>
const typename ObjRedir<T1>::Proxy ObjRedir<T1>::operator[](int index) const
{
	return Proxy(const_cast<ObjRedir&>(*this), index);
}

template<typename T1>
typename ObjRedir<T1>::Proxy ObjRedir<T1>::operator[](int index)
{
	return Proxy(*this, index);
}

template<typename T1>
ObjRedir<T1>::Proxy::Proxy(ObjRedir& obj, int index) : self(obj), index(index)
{
}

template<typename T1>
ObjRedir<T1>::Proxy::operator T1() const
{
	return self.ptr.data[index]; //  redirect this access if nessary
}

typedef struct {
	char a;
	int b;
} ST_DEMO1;

using namespace std;
int main()
{
	uint32_t u32A[10];
	uint16_t u16B[10];
	ST_DEMO1 d1a[10];
	ObjRedir<uint32_t> s1(u32A);
	ObjRedir<uint16_t> s2(u16B);
	ObjRedir<ST_DEMO1> s3(d1a);
	cout << s1[5]; //调用Proxy::operator char() const;
	s2[5] = 'x';	//调用Proxy &operator=(char c);
	//s3[0].a ='y';	// Proxy' has no member named 'a'
	//cout<< s3[0].b;	// :Proxy' has no member named 'b'
	return 0;
}
