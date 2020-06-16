#ifndef LIB_WORK_GAMEENTRY_FILE_GUARD
#define LIB_WORK_GAMEENTRY_FILE_GUARD

#include <iostream>
#include <string>

using namespace std;

class GameEntry {


public:
	GameEntry(const string& n="", int s=0);
	string getName() const;
	int getScore() const;

private:
	string name;
	int score;

};


#endif