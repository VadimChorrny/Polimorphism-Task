#include "Cat.h"

Cat::Cat(const size_t& age, const size_t& weight, const string& owner, const double& woolLength)
	:DomesticAnimal(age,weight,owner), woolLength(woolLength)
{}

void Cat::sound() const
{
	cout << "Myav-myav, myav-myav..." << endl;
}

void Cat::eat() const
{
	cout << "Like fish..." << endl;
}

void Cat::type() const
{
	DomesticAnimal::type();
	cout << "Is a cat..." << endl;
}

void Cat::print() const
{
	DomesticAnimal::print();
	cout << "Long wools:\t" << woolLength << endl;
}
