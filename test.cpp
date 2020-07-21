#include <iostream>
#include <string>
#include <vector>


using namespace std;

void deleteIndex(int* A, int& n, int i){
	for(int j = i; j < (n-1); j++){
		A[j] = A[j+1];
	}
	n--;
}

void reverse(int* A, int n){
	int temp;
	int j = n-1;
	int end;
	if((n%2)==0){
		 end = (n/2);
	}else{
		 end = ((n-1)/2);
	}
	for(int i = 0; i < n; i++){
		if(i==end){
			break;
		}
		temp = A[j];
		A[j] = A[i];
		A[i] = temp;
		j--;
	}
}

void print(int* A, int n){
	for (int i = 0; i < n; i++){
		cout<< A[i] << " ";
	}
	printf("\n");
}

int main(){
	// char ch = 'Q';
	// char* p = &ch; 
	// std::cout << *p << std::endl;
    // ch = 'Z';
    // std::cout << *p << std::endl; 
    // *p = 'X'; 
    // std::cout << ch << std::endl;


	// int A[] = {5 , 2, 77, 40, 12071}; 

	// printf("\n");

	// print(A,5);

	// printf("\n");

	// reverse(A,5);

	// print(A,5);

	// printf("\n");

	std::vector<int> myvector {2,5};
	std::vector<int> myvec    (4,5);

	for (int i : myvector){
		std::cout << i << " ";
	}
	std::cout<< std::endl;
	for (int j : myvec){
		std::cout << j << " ";
	}

	std::cout<< std::endl;

	return 0;
	
}