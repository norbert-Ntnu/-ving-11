#include <iostream>
#include <vector>
#include <algorithm>
#include "person.h"
#include <list>
#include <string>

using namespace std;string Person::getName() const {
	return name;
}

string Person::getSurname() const {
	return surname;
}

ostream& operator<<(ostream& os, const Person& p) {
	return os <<"name: "<< p.getName() << " " << "surname: " << p.getSurname() << " " << endl;
}
	
void insertOrdered(list<Person> &l, const Person& p) {		for (list<Person>::iterator it = l.begin(); it != l.end(); ++it) {		if ((*it).getName() < p.getName()) {			l.insert(it, p);			break;		}	}	l.push_back(p);}Person::Person(string navn, string etternavn) : name{ navn }, surname{ etternavn } {}