#include "Animal.h"

Animal::Animal(const int age, const int weight)
	:age(age),weight(weight)
{
}

void Animal::print() const
{
	type();
	cout << "Age:\t" << age << "Weight:\t" << endl;
	eat();
	sound();
}

void Animal::setAge(const int& age)
{
	if (age != 0)
	{
		this->age = age;
	}
	else
	{
		cerr << "error with age" << endl;
	}
}

void Animal::setWeight(const int& weight)
{
	if (weight != 0)
	{
		this->weight = weight;
	}
	else
	{
		cerr << "error with weight" << endl;
	}
}
