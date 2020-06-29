
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



int main(){

	// int ab = Factorial(4);
	// cout << ab << endl;
	int a[] = {4,3,6,2,5};
	int s = LinearSum(a,5);
	cout << s <<endl;
}