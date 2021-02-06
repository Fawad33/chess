#include "chessPiece.h"

chessPiece::chessPiece(string objname, string objtype, int objid) {
	name = objname;
	type = objtype;
	id = objid;
}

//void chessPieces::move(int fromX, int fromY, int toX, int toY);

int chessPiece::getID() {
	return id;
}

string chessPiece::getName(){
	return name;
}

string chessPiece::getType() {
	return type;
}