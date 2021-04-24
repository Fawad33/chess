#pragma once
#include "chessPiece.h"

class pawn : public chessPiece {
public:
	std::string objnamepawn, objtypepawn;
	int objidpawn;
	pawn(string objnamepawn, string objtypepawn, int objidpawn);
	bool move(int fromX, int fromY, int toX, int toY);
};