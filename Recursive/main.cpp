
#include <iostream>
using namespace std;


int Factorial(int n){
	if(n==0) return 1;
	else return n * Factorial(n-1);
}


int LinearSum(int* A, int n){
	if (n==1){
		return A[0];
	}else{
		return LinearSum(A,n-1)+A[n-1];
	}
}


int LinearAdd(int* A, int n, int m, int counter = 0){
	if(n==1){
		return A[m-1];
	}else{
		return LinearAdd(A,n-1,m,counter+1) + A[counter];
	}
}





int main(){

	// int ab = Factorial(4);
	// cout << ab << endl;
	   int a[] = {4,3,6,2,5};
	int s = LinearSum(a,5);
	cout << s <<endl;

	int j = LinearAdd(a,5,5);
	cout << j << endl;
}