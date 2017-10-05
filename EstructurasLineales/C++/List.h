#pragma once
#include <stdio.h>
#include "Node.h"
#include "Node.cpp"

template <class T> class List {
public:
	Node<T> *first;
	Node<T> *last;
	Node<T> *pointer;
	int length;

	List();
	~List();

	bool isEmpty();
	void insertFirst(T d);
	void insertLast(T d);
	void deleteList();
	void deleteFirst();
	void deleteLast();
	void deleteNode(T d);
	void showList();
	void showListbyAddress();
};