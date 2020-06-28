#include "game.h"
#include <vector>

// void insertion(int* A , int n){
// 	for (int i = 1; i < n; i++) {
		
// 		int cur = A[i];
// 		int j = i - 1;
// 		while ((j >= 0) && (A[j] > cur)) {
// 			A[j + 1] = A[j];
// 			j--;
// 		}
// 		A[j + 1] = cur;
// 		}
// }


int main(){


	// int** M = new int*[3];
	// for (int i=0; i<3; i++){
	// 	M[i] = new int[3];
	// }

	vector< vector <int> > M(3, vector<int>(5));



	int start = 5;

	for(int row = 0; row < 3; row++){
		cout<<endl;
		for(int col = 0; col<5; col++){
			M[row][col] = start;
			 printf("%-10d ",M[row][col]);
			start = start + 5;
		}
	}

	cout<< endl;

	



	

	



















	// int a[] = {5,4,9,7};
	// insertion(a,4);
	// cout<< a[0] <<endl <<a[1] << endl<< a[2] << endl << a[3] << endl;
	// GameEntry gm("novah",58);
	// GameEntry n("zaid",100);
	// n = gm.returnClass()
	// cout<< n.getScore() <<"  "<< n.getName() << endl;





}