#ifndef TILE_H
#define TILE_H

#include "object.h"
#include "pathfinding.h"

class Tile {
private:
	object* contents;
	Tile* north;
	Tile* east;
	Tile* south;
	Tile* west;
public:
	// Constructors
	Tile() : contents(NULL), north(NULL), east(NULL), south(NULL), west(NULL) {};	// Default
	Tile(int x, int y);								// Rectangle

	// Print entire tile grid to screen, each tile represented by "x"
	void print_map();
	// Print map starting Tile, each tile represented by "x"
	void print_from();
	// Get specific tile by map reference, location.
	Tile* get(location coordinates);
	// Get specific tile by map reference, individual ints.
	Tile* get(int x, int y);

	// Getters/setters
	object* getContents() { return contents; };
	int setContents(object* Contents);			// Defined in file
	Tile* getNorth() { return north; };
	int setNorth(Tile* North) { north = North; };
	Tile* getEast() { return east; };
	int setEast(Tile* East) { east = East; };
	Tile* getSouth() { return south; };
	int setSouth(Tile* South) { south = South; };
	Tile* getWest() { return west; };
	int setWest(Tile* West) { west = West; };
};

#endif
