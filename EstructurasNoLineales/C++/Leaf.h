#pragma once
#ifndef Leaf_h
#define Leaf_h

#include <stdio.h>
class Leaf {
private:
	int data;

public:
	Leaf *left;
	Leaf *right;

	Leaf();
	Leaf(int d);
	~Leaf();
	void print();
	int getData();
	void setData(int d);

};
#endif /*Leaf_h*/