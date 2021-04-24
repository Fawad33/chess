#include "chessPiece.h"

class knight : public chessPiece {
public:
	std::string objnamebishop, objtypebishop;
	int objidbishop;
	knight(string objnamebishop, string objtypebishop, int objid);
	bool move(int fromX, int fromY, int toX, int toY);
};