#include "chessPiece.h"

class rook : public chessPiece {
public:
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	rook(string objnamebishop, string objtypebishop, int objid);
	bool move(int fromX, int fromY, int toX, int toY);
};