#pragma once
#include<string>

using namespace std;

class chessPiece {
private:
	string type;
	string name;
	int id;
public:
	string getName();
	string getType();
	int getID();
	chessPiece(string, string, int);
	virtual void move(int fromX, int fromY, int toX, int toY) = 0;
};