#include "Stack.h"

// Constructor
Stack::Stack(int maxI) {
	maxItems = maxI;
	currentItems = 0;
	top = nullptr;
	bot = nullptr;
}

// Checks if list is empty by checking the current Items
bool Stack::isEmpty() {
	if (currentItems == 0) {
		return true;
	}
	return false;
}

// Checks if the list is full by seeing if current items is equal to max items
bool Stack::isFull() {
	if (currentItems == maxItems) {
		return true;
	}
	return false;
}

// Adds item to the end of the list and if the list is full then it outputs an error message
void Stack::Push(int val) {
	Item* item = new Item(val);
	if (!isFull()) {
		if (getTop() == nullptr) {
			top = item;
			bot = top;
		}
		else {
			bot->next = item;
			bot = bot->next;
		}
		currentItems++;
	}
	else {
		cout << "The List is Full!" << endl;
	}
}

// Removes an item from the front of the list and checks if the list is empty to take out of and prints an error message on this situation
void Stack::Pop() {
	if (!isEmpty()) {
		top = top->next;
		currentItems--;
	}
	else {
		cout << "The List is Empty!" << endl;
	}
}

// Gets the top item of the list.
Item* Stack::getTop() {
	Item* copyTop = top;
	return copyTop;
}

// Displays the list via for loop
void Stack::display() {
	Item* temp = top;
	for (int i = 0; i < currentItems; i++) {
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << endl;
}

//Flips the list
void Stack::flip(Item* curr, Item* prev) {
	if (curr == nullptr) {
		Item* temp = top;
		top = bot;
		bot = temp;
		return;
	}
	Item* next = curr->next;
	curr->next = prev;
	flip(next, curr);
}
