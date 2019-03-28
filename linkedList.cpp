#include <iostream>
#include <vector>
#include <algorithm>
//#include "person.h"
#include <list>
#include <string>
#include <memory>
#include <ostream>
#include "linkedList.h"

using namespace std;

 Node: friend ostream & operator<<(ostream & os, const Node & node) {
	return os << "value: " << node.getValue() << " " << "previous: " << node.getPrev() << " " << "next: " << node.getNext() << endl;

}

	   // The insert function takes a pointer to node (pos) and a string (value). It creates a new
		// node which contains value. The new node is inserted into the LinkedList BEFORE the
		// node pointed to by pos.
Node* LinkedList::insert(Node* pos, const string& value) {
	if (pos == begin()) {
		head = make_unique<Node>(value, move(head), nullptr));
		pos->prev = begin();
	}
	else {
		pos->prev->next = move(std::make_unique<Node>(value, move(pos->prev->next), pos->prev));
		pos->prev = pos->prev->getNext();
	}
	return pos->getPrev();
}

// The remove function takes a pointer to a node, and removes the node from the list. The
		// function returns a pointer to the element after the removed node.
Node* remove(Node* pos) {

}
