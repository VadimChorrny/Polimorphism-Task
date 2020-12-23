#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal abstract
{
public:
	Animal(const int age, const int weight);
	virtual void print() const;
	virtual void type() const abstract;
	virtual void eat() const abstract;
	virtual void sound() const = 0;
	void setAge(const int& age);
	void setWeight(const int& weight);
private:
	int age;
	int weight;

};

