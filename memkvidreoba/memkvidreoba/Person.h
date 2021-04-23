#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	string name, lname, ID;
		int weight, age;
		Person();
		Person(string name, string lname, string ID, int weight, int age);
		void print();
};

