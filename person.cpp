#include <iostream>
#include <vector>
#include <algorithm>
#include "person.h"
#include <list>
#include <string>

using namespace std;
	return name;
}

string Person::getSurname() const {
	return surname;
}

ostream& operator<<(ostream& os, const Person& p) {
	return os <<"name: "<< p.getName() << " " << "surname: " << p.getSurname() << " " << endl;
}
	
void insertOrdered(list<Person> &l, const Person& p) {