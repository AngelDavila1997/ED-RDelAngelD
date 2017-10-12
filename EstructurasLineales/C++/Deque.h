#pragma once
#ifndef Deque_h
#define Deque_h

#include <stdio.h>
#include "DLNode.cpp"

template <class T> class Deque {
private:
	//Apuntadores a delante y atrás de tipo Nodo con doble enlace
	DLNode<T> *front;
	DLNode<T> *rear;
	//Tamaño
	int size;
public:
	Deque();
	Deque(T d);
	~Deque();

	void enqueueFront(T d);//Añade un elemento al inicio
	void enqueueRear(T d);//Añade un elemento al final
	T dequeueFront();//Elimina y regresa el elemento del frente
	T dequeueRear();//Elimina y regresa el elemento de atras
	T getFront();//Obtiene el elemento de enfrente
	T getRear();//Obtiene el elemento del final
	int getSize();//Obtiene el tamaño
	bool isEmpty();//Verifica si esta vacio
	void clearDeque();//Limpia
	void showDeque();//Muestra
};

#endif /* Deque_hpp */