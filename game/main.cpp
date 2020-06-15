#include "game.h"



int main(){

	GameEntry gm("novah",58);
	GameEntry n("zaid",100);

	n = gm.returnClass();

	cout<< n.getScore() <<"  "<< n.getName() << endl;






}