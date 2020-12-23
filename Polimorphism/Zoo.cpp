#include "Zoo.h"

void Zoo::add( Animal* a)
{
	zoo.push_back(a);
}

void Zoo::showMenu()
{
	string tempType;
	cout << "Enter for your animal:\t";
	cin >> tempType;
	if (tempType == "Cat" || tempType == "cat")
	{
		
	}

}

void Zoo::print() const
{
	for (auto& i : zoo)
	{
		i->type();
		i->sound();
	}
}

void Zoo::edit()
{
	
}
