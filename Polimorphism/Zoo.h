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
	void edit(); // edit age,weight 
private:
	vector<Animal*> zoo;
};

