#pragma once
#include"bishop.h"
#include"chessPieces.h"
#include"king.h"
#include"knight.h"
#include"pawn.h"
#include"queen.h"
#include"rook.h"

class chessBoard {
public:
	bishop bishop[4];
	king king[2];
	knight knight[4];
	queen queen[2];
	rook rook[4];
	pawn pawn[16];

	chessPieces* board[8][8];

	chessBoard();
	void setBoardValue(int toX, int toY, int fromX, int fromY);
};