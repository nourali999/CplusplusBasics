#ifndef DLINKEDLIST_FILE_GUARD
#define DLINKEDLIST_FILE_GUARD
#include <string>
#include <iostream>


using namespace std;

typedef std::string Elem;

class DNode { private:
	Elem elem;
	DNode* prev;
	DNode* next;
	friend class DLinkedList;
};

class DLinkedList { 
	public:
		DLinkedList();
		~DLinkedList();
		bool empty() const;
		const Elem& front() const;
		const Elem& back() const; 
		void addFront(const Elem& e); 
		void addBack(const Elem& e); 
		void removeFront();
		void removeBack();
	private:
		DNode* header; 
		DNode* trailer;
	protected:
	void add(DNode* v, const Elem& e); 
	void remove(DNode* v);

};

#endif