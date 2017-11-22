#pragma once
#include <stdio.h>
#include "Node.cpp"

template <class T> class Stack {
private:
	Node<T> *top;//Se�ala al ultimo nodo integrado a la lista
	int size;//Tama�o de la pila

public:
	Stack<T>();
	Stack<T>(T d);
	~Stack<T>();

	int getSize();//Devuelve el tama�o de la pila
	void push(T d);//Coloca encima, recibe lo que colocara encima
	T pop();//Elimina de la cima y devuelve el dato
	T getTop();//Devuelve el objeto de la cima, no elimina
	void showStack();
};