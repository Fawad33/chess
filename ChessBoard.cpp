#include "chessBoard.h"

chessBoard::chessBoard() {
	bishop[0] = &bishop::bishop("white", "bishop", 0);
	/*board[0][0] = &rook[0], board[0][1] = &knight[0], board[0][2] = &bishop[0], board[0][3] = &queen[0], board[0][4] = &king[0], board[0][5] = &bishop[1], board[0][6] = &knight[1], board[0][7] = &rook[1];
	for (int i = 0; i < 8; i++) {
		board[1][i] = &pawn[i];
	}
	for (int i = 2; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = nullptr;
		}
	}
	for (int i = 0; i < 8; i++) {
		board[6][i] = &pawn[i + 8];
	}
	board[7][0] = &rook[2], board[7][1] = &knight[2], board[7][2] = &bishop[0], board[7][3] = &queen[1], board[7][4] = &king[1], board[7][5] = &bishop[3], board[7][6] = &knight[3], board[7][7] = &rook[3];
	bishop[0] = new bishop("white", "bishop", 0);
	rook[0].type = "white";
	knight[0].type = "white";
	bishop[0]("bishop", "black", 1);
	queen[0].type = "white";
	king[0].type = "white";
	bishop[1].type = "white";
	knight[1].type = "white";
	rook[1].type = "white";
	for (int i = 0; i < 8; i++) {
		pawn[i].type = "white";
	}
	rook[2].type = "black";
	knight[2].type = "black";
	bishop[2].type = "black";
	queen[1].type = "black";
	king[1].type = "black";
	bishop[3].type = "black";
	knight[3].type = "black";
	rook[3].type = "black";
	for (int i = 0; i < 8; i++) {
		pawn[i + 8].type = "black";
	}*/
}

void chessBoard::setBoardValue(int toX, int toY, int fromX, int fromY) {
	board[toX][toY] = board[fromX][fromY];
	board[fromX][fromY] = nullptr;
}
