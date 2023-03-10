#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack list = Stack(5);
	list.Push(1);
	list.Push(2);
	list.Push(3);
	list.display();
	list.flip(list.getTop(), nullptr);
	list.display();
}