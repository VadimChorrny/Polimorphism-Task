#pragma once
#include "DomesticAnimal.h"
class Cat :
    public DomesticAnimal
{
public:
    Cat(const size_t& age = 0, const size_t& weight = 0, const string& owner = "No owner", const double& woolLength = 0.5);
    void sound() const override;
    void eat() const override;
    void type() const override;
    void print() const override;
private:
    double woolLength;
};

