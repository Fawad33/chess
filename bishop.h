#pragma once

#include"chessPieces.h"
#include<string>

class bishop : public chessPieces {
public:	
	void chessPieces::move(int fromX, int fromY, int toX, int toY);
};