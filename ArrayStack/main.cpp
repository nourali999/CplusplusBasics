#include "ArrayStack.h"
#include "ArrayStack.cpp"


int main(){

ArrayStack<int> A; 
A.push(7);
A.push(13);
A.push(5);
A.pop();
cout << A.top() << endl;

}