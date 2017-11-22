#pragma once
#include <stdio.h>
#include <iostream>
template <class T> class DLNode {
public:
	DLNode *next;
	DLNode *back;
	T data;

	DLNode(T d);
	~DLNode();
	void print();
};