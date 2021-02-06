#pragma once

#include "chessPiece.h"
#include<string>


class bishop : public chessPiece {
public:	
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	bishop(string objnamebishop, string objtypebishop, int objid);
	void move(int fromX, int fromY, int toX, int toY);
};