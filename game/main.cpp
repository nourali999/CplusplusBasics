#include "game.h"

void insertion(int* A , int n){
	for (int i = 1; i < n; i++) {
		
		int cur = A[i];
		int j = i - 1;
		while ((j >= 0) && (A[j] > cur)) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = cur;
		}
}






int main(){


	int a[] = {5,4,9,7};

	insertion(a,4);
	cout<< a[0] <<endl <<a[1] << endl<< a[2] << endl << a[3] << endl;







	// GameEntry gm("novah",58);
	// GameEntry n("zaid",100);
	// n = gm.returnClass()
	// cout<< n.getScore() <<"  "<< n.getName() << endl;





}