#pragma once
#include<string>

using namespace std;

class chessPieces {
private:
	string type;
	string name;
	int id;
public:
	string getName();
	string getType();
	int getID();
	chessPieces(string objname, string objtype, int objid);
	void move(int fromX, int fromY, int toX, int toY);
};