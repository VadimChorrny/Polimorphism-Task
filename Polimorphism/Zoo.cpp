#include "Zoo.h"

void Zoo::add( Animal* a)
{
	zoo.push_back(a);
}

void Zoo::showMenu()
{

	cout << "Enter age for your pet:\t";
	cin >> age;
	cout << "Enter weight for your pet:\t";
	cin >> weight;
}

void Zoo::print() const
{
	for (auto& i : zoo)
	{
		i->type();
		i->sound();
	}
}

void Zoo::edit(const size_t& num, const int& age, const int& weight)
{
	zoo[num]->setAge(age);
	zoo[num]->setWeight(weight);
}
