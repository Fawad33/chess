#include "pawn.h"
#include "chessPiece.h"
#include "chessBoard.h"

using namespace std;

pawn::pawn(string name, string type, int id) : chessPiece(name, type, id) {

}

void pawn::move(int fromX, int fromY, int toX, int toY) {
	if (fromY - toX == abs(1) && fromX == toX) {

	}
}
