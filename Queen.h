#pragma once
#include "chessPiece.h"

class queen : public chessPiece {
public:
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	queen(string objnamebishop, string objtypebishop, int objid);
	void move(int fromX, int fromY, int toX, int toY);
};