#include "Programer.h"
#include"Person.h"
#include<iostream>
#include<string>
using namespace std;
Programer::Programer(string name, string lname, string ID, int weight, int age, int programingYears):
	Person( name,  lname,  ID,  weight,  age) {
	
	this->programingYears = programingYears;
}
void Programer::print() {
	cout << "saxeli " << name << " gvari " << lname <<  " piradi nomeri " << ID << " wona " << weight << " asaki " << age<<
		 " programirebis wlebi "<<programingYears << endl;
}
