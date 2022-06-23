#pragma once
#include<string>
#include<iostream>
using namespace std;
class person
{
private:
	string _name;
	long _id_card;
public:
	void set_name(string name);
	void set_id_card();
	void set_id_card(long _id_card);
	string get_name();
	long get_id_card();
	
};

