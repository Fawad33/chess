#include "chessPiece.h"

class rook : public chessPiece {
public:
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	rook(string objnamebishop, string objtypebishop, int objid);
	void move(int fromX, int fromY, int toX, int toY);
};