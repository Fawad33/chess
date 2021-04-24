#include "chessBoard.h"

bishop bishop0("bishop", "white", 0);
bishop bishop1("bishop", "white", 1);
bishop bishop2("bishop", "black", 2);
bishop bishop3("bishop", "black", 3);
king king0("king", "white", 0);
king king1("king", "black", 1);
queen queen0("queen", "white", 0);
queen queen1("queen", "black", 1);
knight knight0("knight", "white", 0);
knight knight1("knight", "white", 1);
knight knight2("knight", "black", 2);
knight knight3("knight", "black", 3);
rook rook0("rook", "white", 0);
rook rook1("rook", "white", 1);
rook rook2("rook", "black", 2);
rook rook3("rook", "black", 3);
pawn pawn0("pawn", "white", 0);
pawn pawn1("pawn", "white", 1);
pawn pawn2("pawn", "white", 2);
pawn pawn3("pawn", "white", 3);
pawn pawn4("pawn", "white", 4);
pawn pawn5("pawn", "white", 5);
pawn pawn6("pawn", "white", 6);
pawn pawn7("pawn", "white", 7);
pawn pawn8("pawn", "black", 8);
pawn pawn9("pawn", "black", 9);
pawn pawn10("pawn", "black", 10);
pawn pawn11("pawn", "black", 11);
pawn pawn12("pawn", "black", 12);
pawn pawn13("pawn", "black", 13);
pawn pawn14("pawn", "black", 14);
pawn pawn15("pawn", "black", 15);

chessBoard::chessBoard() {
	bishop[0] = &bishop0;
	bishop[1] = &bishop1;
	bishop[2] = &bishop2;
	bishop[3] = &bishop3;
	king[0] = &king0;
	king[1] = &king1;
	queen[0] = &queen0;
	queen[1] = &queen1;
	knight[0] = &knight0;
	knight[1] = &knight1;
	knight[2] = &knight2;
	knight[3] = &knight3;
	rook[0] = &rook0;
	rook[1] = &rook1;
	rook[2] = &rook2;
	rook[3] = &rook3;
	pawn[0] = &pawn0;
	pawn[1] = &pawn1;
	pawn[2] = &pawn2;
	pawn[3] = &pawn3;
	pawn[4] = &pawn4;
	pawn[5] = &pawn5;
	pawn[6] = &pawn6;
	pawn[7] = &pawn7;
	pawn[8] = &pawn8;
	pawn[9] = &pawn9;
	pawn[10] = &pawn10;
	pawn[11] = &pawn11;
	pawn[12] = &pawn12;
	pawn[13] = &pawn13;
	pawn[14] = &pawn14;
	pawn[15] = &pawn15;

	board[0][0] = rook[0], board[0][1] = knight[0], board[0][2] = bishop[0], board[0][3] = queen[0], board[0][4] = king[0], board[0][5] = bishop[1], board[0][6] = knight[1], board[0][7] = rook[1];
	for (int i = 0; i < 8; i++) {
		board[1][i] = pawn[i];
	}
	for (int i = 2; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = nullptr;
		}
	}
	for (int i = 0; i < 8; i++) {
		board[6][i] = pawn[i + 8];
	}
	board[7][0] = rook[2], board[7][1] = knight[2], board[7][2] = bishop[0], board[7][3] = queen[1], board[7][4] = king[1], board[7][5] = bishop[3], board[7][6] = knight[3], board[7][7] = rook[3];
}

void chessBoard::setBoardValue(int toX, int toY, int fromX, int fromY) {
	board[toX][toY] = board[fromX][fromY];
	board[fromX][fromY] = nullptr;
	
}

chessBoard chessBoardObj;