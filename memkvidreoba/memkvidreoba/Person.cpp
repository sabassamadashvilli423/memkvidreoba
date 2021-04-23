#include "Person.h"
#include<iostream>
using namespace std;
Person::Person() {
	cout << " created" << endl;
}
Person::Person(string name, string lname, string ID, int weight, int age) {
	this->name = name;
	this->lname = lname;
	this->ID = ID;
	this->weight = weight;
	this->age = age;
}
void Person::print() {
	cout <<"saxeli "<< name << "gvari " << lname << " piradi nomeri " << ID << "wona " << weight << "asaki " << age << endl;
}
