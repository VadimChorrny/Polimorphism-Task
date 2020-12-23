#pragma once
#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;
class DomesticAnimal :
    public Animal
{
public:
    DomesticAnimal(const size_t& age = 0, const size_t& weight = 0, const string& owner = 0);
    void type() const override;
    void print() const override;
private:
    string owner;
};

