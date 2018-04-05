// C++–â4
//

#include "stdafx.h"

#include<iostream>
#include<memory>
using namespace std;

template<class X, class Y>
shared_ptr<X> create(Y n) { return (shared_ptr<X>)(new X(n)); }

class Man {
	int hp;
public:
	Man(int n = 0) : hp(n){}
	Man operator+=(const Man&);
	bool operator>(const Man&)const;
	Man operator=(int);
	int get()const { return hp; }
	virtual ~Man(){}
};

Man Man::operator+=(const Man& ob) {
	hp += ob.hp;
	return *this;
}

bool Man::operator>(const Man& ob)const {
	return hp > ob.hp;
}

Man Man::operator=(const int n) { hp = n; return *this; }

int main()
{
	shared_ptr<Man> boo(create<Man>(200)), gokuu(create<Man>(100));

	if (*boo > *gokuu) { *boo += *gokuu; *gokuu = 0; }

	cout << "Boo = " << boo->get() << endl;
	cout << "Gokuu = " << gokuu->get() << endl;

	return 0;
}