#include "chessPiece.h"

class pawn : public chessPiece {
public:
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	pawn(string objnamebishop, string objtypebishop, int objid);
	void move(int fromX, int fromY, int toX, int toY);
};