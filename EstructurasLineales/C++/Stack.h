#pragma once
#include <stdio.h>
#include "Node.cpp"

template <class T> class Stack {
private:
	Node<T> *top;
	int size;

public:
	Stack<T>();
	Stack<T>(T d);
	~Stack<T>();

	int getSize();
	void push(T d);
	T pop();
	T getTop();
	void showStack();
};