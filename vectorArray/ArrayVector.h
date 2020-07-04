#ifndef ARRAYVECTOR_FILE_GUARD
#define ARRAYVECTOR_FILE_GUARD
#include <iostream>
#include <math.h>
using namespace std;

typedef int Elem;

class ArrayVector {
	public:
		ArrayVector();
		int size() const;
		bool empty() const;
		Elem& operator[](int i);
		Elem& at(int i);
		void erase(int i);
		void insert(int i, const Elem& e);
		void reserve(int N);

		private:
		int capacity; 
		int n;
		Elem* A;
};

#endif