// C++ñ‚2
//

#include "stdafx.h"

#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;


class Test {
	static int aim;		//çáäiì_
public:
	static void act(const int n = 0) {
		try { if (aim <= n) throw(string)"Ç©ÇÈÇ¢Ç∫"; }
		catch (string s) { cout << s; throw aim; }
	}
	virtual ~Test(){}
};

int Test::aim = 80;

int main()
{
	shared_ptr<Test> p;

	try { p->act(90); }
	catch (int n) { cout << n << "ì_" << endl; }

	return 0;
}