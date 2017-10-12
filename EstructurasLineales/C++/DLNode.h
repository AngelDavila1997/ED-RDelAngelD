#pragma once
#ifndef DLNode_h
#define DLNode_h

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
#endif /* DLNode_hpp */