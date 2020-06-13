#include <iostream>
#include <string>
using namespace std;

class GameEntry { 
public:
	GameEntry(const string& n="", int s=0);
	GameEntry returnClass(){
		return *this;
	}
	string getName() const;
	int getScore() const;
private:
	string name; 
	int score;

};
GameEntry::GameEntry(const string& n, int s)
: name(n), score(s) {}

string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }



int main(){

	GameEntry gm("novah",58);
	GameEntry n("zaid",100);

	n = gm.returnClass();


	cout<< n.getScore() <<"  "<< n.getName() << endl;






}