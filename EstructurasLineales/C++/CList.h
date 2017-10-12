#pragma once
#ifndef CList_hpp
#define CList_hpp

#include <stdio.h>
#include "Node.cpp"

template <class T> class CList {
public:
	Node<T> *pivot;
	Node<T> *pointer;
	int length;

	CList();
	CList(T d);
	~CList();

	bool isEmpty();
	void insert(T d);
	void deleteNode(T d);
	void deleteList();
	void showList();
	void showListbyAddress();
};


#endif /* CList_hpp */