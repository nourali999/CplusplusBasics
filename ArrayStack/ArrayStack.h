#ifndef ARRAYSTACK_FILE_GUARD
#define ARRAYSTACK_FILE_GUARD

#include <iostream>

using namespace std;

template <typename E>
class ArrayStack {

	public:
 		ArrayStack(int cap = 100);
		int size() const;
		bool empty() const;
		const E& top() const;
		void push(const E& e);
		void pop();
	
	private:
	E* S;
	int capacity;
	int t;

};

#endif