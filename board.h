#pragma once
#include "tiles.h"
#include "rocket.h";
#include "TNT.h"
#include "tilesFactory.h"

class board
{
private:
	tilesFactory factory;
	tiles* brd[10][15];
public:
	board();
	tiles* getTiles(int x, int y);
}; 
