#pragma once
#include"bishop.h"
#include"chessPieces.h"
#include"king.h"
#include"knight.h"
#include"pawn.h"
#include"queen.h"
#include"rook.h"

class ChessBoard {
public:
	Bishop bishop[4];
	King king[2];
	Knight knight[4];
	Queen queen[2];
	Rook rook[4];
	Pawn pawn[16];

	ChessPieces* board[8][8];

	ChessBoard();
};