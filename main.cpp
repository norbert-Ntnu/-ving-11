#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include "person.h"

using namespace std;

/*void replace(vector<string> &vec, string old, string replacement);
void replace(set<string> &sett, string old, string replacement);*/

int main() {
	/*vector <string> sample{
	 "Consectetur", "Amet", "Sit", "Dolor", "Ipsum", "Lorem" };

	vector<string>::const_iterator it;
	it = sample.begin();
	while (it != sample.end()) {
		cout << *it << " ";
		++it;
	}
	cout << endl;

	reverse(sample.begin(), sample.end());
	it = sample.begin();
	while (it != sample.end()) {
		cout << *it << " ";
		++it;
	}

	cout << endl;


	replace(sample, "Lorem", "Latin");


	cout << endl;

	set <string> myset;
	myset.insert("Consectetur");
	myset.insert("Amet");
	myset.insert("Sit");
	myset.insert("Dolor");
	myset.insert("Ipsum");
	myset.insert("Lorem");

	set<string>::const_iterator sit;
	sit = myset.begin() ;
	while (sit != myset.end()) {
		cout << *sit << " ";
		++sit;
	}
	cout << endl;


	auto nit = myset.rbegin();
	while (nit != myset.rend()) {
		cout << *nit << " ";
		++nit;
	}
	cout << endl;

	replace(myset, "Lorem", "Latin");*/

	list<Person> l;
	insertOrdered(l, { "qwe", "rty" });
	insertOrdered(l, { "tyu", "iio" });
	insertOrdered(l, { "non", "non" });

	for (list<Person>::iterator it = l.begin(); it != l.end(); ++it) 
		cout << *it << endl;
	
	return 0;
}

/*void replace(vector<string> &vec, string old, string replacement) {
	vector <string>::iterator it;
	
	for (it = vec.begin(); it != vec.end(); ++it) {
		/*it = find(vec.begin(), vec.end(), old);
    vec.insert(it, replacement); 
		if (*it == old) {
			
			it= vec.erase(it);
			it = vec.insert(it,replacement);
		}	
		cout << *it << " ";
	}
}

void replace(set<string> &sett, string old, string replacement) {
	set <string>::iterator sit;

	for (sit = sett.begin(); sit != sett.end(); ++sit) {
		/*it = find(vec.begin(), vec.end(), old);
	vec.insert(it, replacement); 
		if (*sit == old) {

			sit = sett.erase(sit);
			sit = sett.insert(sit, replacement);
		}
		cout << *sit << " ";
	}
}*/