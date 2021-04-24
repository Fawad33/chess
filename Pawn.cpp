#include "pawn.h"
#include "chessPiece.h"
#include "chessBoard.h"

using namespace std;

extern chessBoard chessBoardObj;

pawn::pawn(string name, string type, int id) : chessPiece(name, type, id) {

}

bool pawn::move(int fromX, int fromY, int toX, int toY) {
	if ((fromX || fromY || toX || toY > 7) || (fromX || fromY || toX || toY < 0))
		return false;
	else if (fromY - toY == abs(1) && chessBoardObj.board[toX][toY] == NULL)
		return true;
	else if (fromX - toX == abs(1) && fromY - toY == abs(1) && chessBoardObj.board[toX][toY] != NULL && chessBoardObj.board[toX][toY]->getType() != chessBoardObj.board[fromX][fromY]->getType())
		return true;
	else
		return false;
}
