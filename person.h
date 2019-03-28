#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

class Person {
	string name;	string surname;public:	Person(string name, string surname );	string getName() const;	string getSurname()const;};ostream& operator<<(ostream& os, const Person& p);
void insertOrdered(std::list<Person> &l, const Person& p);

