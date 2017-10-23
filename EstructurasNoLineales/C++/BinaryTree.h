#pragma once
#ifndef BinaryTree_h
#define BintaryTree_h

#include <stdio.h>
#include "Leaf.h"
class BinaryTree {
private:
	Leaf *root;
	int leaves;

public:
	BinaryTree();
	BinaryTree(int d);
	~BinaryTree();

	void insert(int d, Leaf *root);
	void showLeaf(Leaf *root);
	void deleteLeaf(int d);
	bool isEmpty();
	Leaf getRoot();
	int height(Leaf *root);
	int getLeaves();
};
#endif /*BinaryTree_h*/