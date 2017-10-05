#pragma once
#include <stdio.h>
#include "Node.h"

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
