#include <iostream>
#include"Person.h"
#include"Programer.h"
using namespace std;
int main()
{
    Person a("saba ", "samadashvili"," 26929274", 60 ,14 );
    Programer b("luka "," kvelaidze"," 89982656", 67,14,1);
    a.print();
    b.print();
}
