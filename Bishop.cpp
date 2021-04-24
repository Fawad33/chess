#include<string>
#include "bishop.h"
#include "chessBoard.h"

using namespace std;

extern chessBoard chessBoardObj;

bishop::bishop(string name, string type, int id) : chessPiece(name, type, id) {

}

bool bishop::move(int fromX, int fromY, int toX, int toY){
	if ((fromX || fromY || toX || toY > 7) || (fromX || fromY || toX || toY < 0))
		return false;
	if (abs(toX - fromX) != abs(toY - fromY))
		return false;
	if (chessBoardObj.board[fromX][fromY]->getType() == chessBoardObj.board[toX][toY]->getType())
		return false;
	while (fromX <= toX && fromY <= toY) {
		fromX++, fromY++;
		if (chessBoardObj.board[fromX][fromY] != NULL)
			return false;
	}
	return true;
}