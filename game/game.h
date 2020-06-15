#ifndef LIB_WORK_GAME_FILE_GUARD
#define LIB_WORK_GAME_FILE_GUARD


#include <iostream>
#include <string>
using namespace std;


class GameEntry { 
public:
	GameEntry(const string& n="", int s=0);
	GameEntry returnClass();
	string getName() const;
	int getScore() const;
private:
	struct Data;
	string name; 
	int score;

};


#endif