#pragma once
#ifndef Node_h
#define Node_h
#include <stdio.h>
#include <iostream>
using namespace std;

//Declaración de la clase

template <class T> class Node {
public:
	//Atributos
	Node *next; //Apuntador a siguiente nodo.
	T data; //Dato genérico.

			//Declaración de constructores.
	Node();
	Node(T);
	//Declaración de desctructor.
	~Node();

	//Declaración Método mostrar
	void print();
	void printS();
};
#endif 