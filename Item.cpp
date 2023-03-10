#include "Item.h"

// Constructor
Item::Item(int v) {
	data = v;
	next = nullptr;
}

// Returns the data stored in an item
int Item::getData() {
	return data;
}