#include "linkedlist.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	StringLinkedList list;

	list.addFront("hello");
	list.addFront("how");
	list.addFront("are");
	list.addFront("you");
	while(!list.empty()){
		string elem = list.front();
		list.removeFront();
		cout<< elem << endl;
	}


}