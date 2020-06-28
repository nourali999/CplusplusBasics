#include "Dlinkedlist.h"
//#include "Dlinkedlist.cpp"

using namespace std;

int main(){


	DLinkedList *list = new DLinkedList(); ;

	list->addFront("Hello");
	list->addFront("How");
	list->addFront("are");
	list->addFront("you");

	// get item from back

     string a = list->back();

	cout<< a << endl;





}