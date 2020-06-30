
#include <iostream>
#include <vector>
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

int LinearVectorAdd(vector<int> A, int counter = 0){
	if(counter== (A.size()-1)){
		return A[A.size()-1];
	}else{
		counter = counter+1;
		return LinearVectorAdd(A,counter) + A[counter-1];
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
	vector<int> b;
	b.push_back(4);
	b.push_back(3);
	b.push_back(6);
	b.push_back(2);
	b.push_back(5);

	// int j = LinearAdd(a,5,5);
	// cout << j << endl;

	int s = LinearSum(a,5);
	cout << s <<endl;

	int k = LinearVectorAdd(b);

	cout << k << endl;
}