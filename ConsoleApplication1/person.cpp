#include "person.h"



void person::set_name(string name){
	_name = name;
}
void person::set_id_card() {
	long id_card;
	do{
	cout << "\n\n\t\t\t\tPlease Enter the id card  : ";
	cin >> id_card;
	if(id_card > 0)
	_id_card = id_card;
	else 
	cout << "\n\n\t\t\t\tPlease Enter Correct Id Card : \n";
	} while (id_card <= 0);



}
void person::set_id_card(long id_card)
{
	_id_card = id_card;
}
string person::get_name()
{
	return _name;
}
long person::get_id_card()
{
	return _id_card;
}
