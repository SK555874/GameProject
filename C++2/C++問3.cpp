// C++–â3
//

#include "stdafx.h"

#include<iostream>
#include<memory>
using namespace std;

template<class X>
shared_ptr<X> create() { return (shared_ptr<X>)(new X); }

class Shop {
	int* p;
public:
	Shop(const int n = 100) {
		try { p = new int; }
		catch (bad_alloc) { exit(1); }
		*p = n;
	}
	Shop(const Shop& ob) {
		try { p = new int; }
		catch (bad_alloc) { exit(1); }
		*p = *(ob.p);
	}
	friend void Show(const Shop&);
	virtual ~Shop() { delete p; }
};

void Show(const Shop& ob) { cout << *(ob.p) << endl; }

int main()
{
	shared_ptr<Shop> p(create<Shop>());
	
	Show(*p);

	return 0;
}