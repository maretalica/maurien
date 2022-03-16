#pragma once
#include "tiles.h"
#include "TNT.h"
#include "rocket.h"
using namespace std;

class tilesFactory
{
public:
	tiles* createTiles(string type, int X, int Y);
};