#include"chessBoard.h"

ChessBoard::ChessBoard() {
	board[0][0] = &rook[0], board[0][1] = &knight[0], board[0][2] = &bishop[0], board[0][3] = &queen[0], board[0][4] = &king[0], board[0][5] = &bishop[1], board[0][6] = &knight[1], board[0][7] = &rook[1];
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
}