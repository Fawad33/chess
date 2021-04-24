#include "chessPiece.h"

class king : public chessPiece {
public:
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	king(string objnamebishop, string objtypebishop, int objid);
	bool move(int fromX, int fromY, int toX, int toY);
};