#include "rook.h"
#include "chessPiece.h"

using namespace std;

rook::rook(string name, string type, int id) : chessPiece(name, type, id) {

}

bool rook::move(int fromX, int fromY, int toX, int toY) {
	return true;
}
