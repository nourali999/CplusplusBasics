#include "ArrayStack.h"




template <typename E> 
ArrayStack<E>::ArrayStack(int cap)
: S(new E[cap]), capacity(cap), t(-1) { } 

template <typename E> int ArrayStack<E>::size() const
{ return (t + 1); } // number of items in the stack
template <typename E> bool ArrayStack<E>::empty() const
{ return (t < 0); } // is the stack empty?
template <typename E> // return top of stack
const E& ArrayStack<E>::top() const  {
return S[t]; 
}
template <typename E> // push element onto the stack 
void ArrayStack<E>::push(const E& e) {
t++;
S[t] = e;
}

template <typename E> // pop the stack 
void ArrayStack<E>::pop() {
 --t;
}
