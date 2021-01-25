#include"chessPieces.h"

chessPieces::chessPieces(string objname, string objtype, int objid) {
	name = objname;
	type = objtype;
	id = objid;
}

int chessPieces::getID() {
	return id;
}

string chessPieces::getName(){
	return name;
}

string chessPieces::getType() {
	return type;
}