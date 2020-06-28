#ifndef LIB_WORK_Score_FILE_GUARD
#define LIB_WORK_Score_FILE_GUARD

#include "GameEntry.h"

using namespace std;


class Scores{
	
public:
	Scores(int maxEnt = 10);
	~Scores();
	void add(const GameEntry& e);
	GameEntry remove(int i);
	GameEntry* entries;

private:
	int maxEntries;
	int numEntries;

};











#endif