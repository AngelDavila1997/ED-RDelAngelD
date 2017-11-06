#pragma once
#ifndef BinaryTree_h
#define BintaryTree_h

#include <stdio.h>
#include "Leaf.h"
class BinaryTree {
private:
	Leaf *root;
	int leaves;
	Leaf *mostLeft(Leaf *root);

public:
	BinaryTree();
	BinaryTree(int d);
	~BinaryTree();

	void insert(int d, Leaf *root);
	void showLeaf(Leaf *root);
	Leaf *fetch(int d, Leaf * root);
	Leaf *getFather(Leaf * leaf, Leaf * root);
	bool deleteLeaf(int d, Leaf * root);
	bool isEmpty();
	Leaf *getRoot();
	int height(Leaf *root);
	int getLeaves();
	void inOrden(Leaf * root);
	void preOrden(Leaf * root);
	void postOrden(Leaf * root);
};
#endif /*BinaryTree_h*/