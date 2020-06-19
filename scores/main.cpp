#include "Score.h"
#include "GameEntry.h"
#include "GameEntry.cpp"
#include "Score.cpp"


int main(){


	GameEntry n("novah",150);

	GameEntry z("zaid", 250);

	GameEntry m("mohamed",200);

	Scores sc(3);

	sc.add(n);
	sc.add(z);
	sc.add(m);

	for(int i=0; i<3; i++){
		cout<< sc.entries[i].getName() << endl;
	}









}