#include"Bishop.cpp""
#include"ChessPiece.cpp"
#include"King.cpp"
#include"Knight.cpp"
#include"Pawn.cpp"
#include"Queen.cpp"
#include"Rook.cpp"

class ChessBoard {
public:	
	Bishop blackBishopLeft;
	Bishop blackBishopRight;
	Bishop whiteBishopLeft;
	Bishop whiteBishopRight;
	King blackKing;
	King whiteKing;
	Knight blackKnightLeft; 
	Knight blackKnightRight;
	Knight whiteKnightLeft;
	Knight whiteKnightRight;
	Queen blackQueen;
	Queen whiteQueen;
	Rook blackRookLeft;
	Rook blackRookRight;
	Rook whiteRookLeft;
	Rook whiteRookRight;
	Pawn blackPawn1;
	Pawn blackPawn2;
	Pawn blackPawn3;
	Pawn blackPawn4;
	Pawn blackPawn5;
	Pawn blackPawn6;
	Pawn blackPawn7;
	Pawn blackPawn8;
	Pawn whitePawn1;
	Pawn whitePawn2;
	Pawn whitePawn3;
	Pawn whitePawn4;
	Pawn whitePawn5;
	Pawn whitePawn6;
	Pawn whitePawn7;
	Pawn whitePawn8;

	ChessPiece* board[8][8] = {&blackRookLeft, &blackKnightLeft, &blackBishopLeft, &blackKing, & blackQueen, &blackBishopRight, &blackKnightRight, &blackRookRight,
	&blackPawn1, &blackPawn2, &blackPawn3, &blackPawn4, &blackPawn5, &blackPawn6, &blackPawn7, &blackPawn8,
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
	&whitePawn1, &whitePawn2, &whitePawn3, &whitePawn4, &whitePawn5, &whitePawn6, &whitePawn7, &whitePawn8,
	&whiteRookLeft, &whiteKnightLeft, &whiteBishopLeft, &whiteQueen, &whiteKing,  &whiteBishopRight, &whiteKnightRight, &whiteRookRight };
};