#pragma once
#include"Person.h"
class Programer :public Person
{
public:
	int programingYears;
	Programer(string name, string lname, string ID, int weight, int age,int programingYears);
	void print();
};