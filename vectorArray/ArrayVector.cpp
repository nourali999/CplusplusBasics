#include "ArrayVector.h"


ArrayVector::ArrayVector()
: capacity(0), n(0), A(nullptr) { }

int ArrayVector::size() const { return n; }

bool ArrayVector::empty() const { return size() == 0; }

Elem& ArrayVector::operator[ ](int i) { return A[i]; }

Elem& ArrayVector::at(int i){ 
	if (i<0||i>=n){
		cout << "Out of bounds" <<endl;
	}
 return A[i];
}


void ArrayVector::erase(int i) {
for (int j = i+1; j < n; j++)
	A[j - 1] = A[j];
	n--;
}

void ArrayVector::reserve(int N) { 
if (capacity >= N) return; Elem* B = new Elem[N];
for (int j = 0; j < n; j++)
B[j] = A[j];
if (A != nullptr) delete [] A; A = B;
capacity = N;
}


void ArrayVector::insert(int i, const Elem& e) {
if (n >= capacity) 
reserve(max(1, 2 * capacity));
for (int j = n - 1; j >= i; j--) 
A[j+1] = A[j];
A[i] = e;
 n++;
}















