// C++問1
//

#include "stdafx.h"

#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;


class Cast {
	string name;
public:
	Cast(const string s = "GHOST") : name(s){}
	string get()const { return name; }
	virtual ~Cast(){}
};


int main()
{
	vector<Cast*> v;
	
	v.push_back(new Cast("GOBLIN"));
	v.push_back(new Cast);

	for (int i = 0; i < (int)v.size(); i++)
		cout << v[i]->get() << endl;

	for (int i = 0; i < (int)v.size(); i++)
		delete v[i];

	    return 0;
}

