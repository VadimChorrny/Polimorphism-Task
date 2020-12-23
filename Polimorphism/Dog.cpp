#include "Dog.h"

Dog::Dog(const size_t& age, const size_t& weight, const string& owner, const string& breed)
	:DomesticAnimal(age,weight,owner), breed(breed)
{}

void Dog::sound() const
{
	cout << "Wow-wow, Wow-wow..." << endl;
}

void Dog::eat() const
{
	cout << "Meat" << endl;
}

void Dog::type() const
{
	cout << "Is a dog..." << endl;
	cout << "Is a - ";
	DomesticAnimal::type();
}

void Dog::print() const
{
	DomesticAnimal::print();
	cout << "Breed of dog:\t" << breed << endl;
}
