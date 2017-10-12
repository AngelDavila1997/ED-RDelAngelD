#include "Node.h"

//Constructor por defecto
template <typename T>
Node<T>::Node() {
	next = NULL;
}

//Consturctor con un elemento
template <typename T>
Node<T>::Node(T d) {
	data = d;
	next = NULL;
}

//Imprimir Nodo
template <typename T> void
Node <T>::print() {
	std::cout << data << "->";
}

//Imprimir Nodo para pila
template <typename T> void
Node <T>::printS() {
	std::cout << data << endl << "|" << endl;
}

//Destructor
template <typename T>
Node<T>::~Node() {}