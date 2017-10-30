#include <iostream>
#include "BinaryTree.h"

int main(int argc, const char * argv[]) {
	BinaryTree  arbol = *new BinaryTree();
	arbol.insert(10, arbol.getRoot());
	arbol.insert(8, arbol.getRoot());
	arbol.insert(11, arbol.getRoot());
	arbol.insert(6, arbol.getRoot());
	return 0;
}