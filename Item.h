#pragma once
#include <iostream>

using namespace std;

class Item {
public:
	int data;
	Item* next;
	Item(int v);
	int getData();
};