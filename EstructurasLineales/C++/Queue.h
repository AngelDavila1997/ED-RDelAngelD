#pragma once
#ifndef Queue_h
#define Queue_h

#include <stdio.h>
#include "Node.cpp"

template <class T> class Queue {
private:
	Node<T> *front;
	Node<T> *rear;
	int size;
public:
	//Constructor
	Queue();
	Queue(T d);
	~Queue();

	void enqueue(T d);
	T dequeue();
	T getFront();
	int getSize();
	bool isEmpty();
	void clearQueue();
	void showQueue();

};
#endif /* Queue_hpp */