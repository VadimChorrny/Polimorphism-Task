#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"
using namespace std;
class Zoo
{
public:
	Zoo() = default;
	void add( Animal* a); // 1.Dog 2.Cat
	void showMenu();
	void print() const;
	void edit(const size_t& num, const int& age, const int& weight); // edit age,weight 
private:
	vector<Animal*> zoo;
};

