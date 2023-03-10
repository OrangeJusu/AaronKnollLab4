#pragma once
#include <iostream>
#include "Item.h"

using namespace std;

class Stack {
private:
	Item* top;
	Item* bot;
	int maxItems;
	int currentItems;
	bool flipInProgress = false;
public:
	Stack(int maxI);
	bool isEmpty();
	bool isFull();
	void Push(int val);
	void Pop();
	Item* getTop();
	void display();
	void flip(Item* curr, Item* prev);
};