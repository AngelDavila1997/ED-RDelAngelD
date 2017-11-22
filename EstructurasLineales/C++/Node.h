#pragma once
#ifndef Node_h
#define Node_h
#include <stdio.h>
#include <iostream>
using namespace std;

//Declaraci�n de la clase

template <class T> class Node {
public:
	//Atributos
	Node *next; //Apuntador a siguiente nodo.
	T data; //Dato gen�rico.

			//Declaraci�n de constructores.
	Node();
	Node(T);
	//Declaraci�n de desctructor.
	~Node();

	//Declaraci�n M�todo mostrar
	void print();
	void printS();
};
#endif 