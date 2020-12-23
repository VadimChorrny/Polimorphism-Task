#include <iostream>
#include "Animal.h"
#include "DomesticAnimal.h"
#include "Dog.h"
#include "Cat.h"
#include <vector>
using namespace std;

int main()
{
	DomesticAnimal* d = new Dog(3,8, "Vadim Chorrny","simple");
	DomesticAnimal* a = new Cat(3, 8, "Vadim Chorrny", 1);

	d->print();
	a->print();

	vector<Animal*>animals = { d };
	for (auto& i : animals)
	{
		i->type();
		i->sound();
	}

	vector<Animal*>animal = { a };
	for (auto& i : animal)
	{
		i->type();
		i->sound();
	}

	return 0;
}