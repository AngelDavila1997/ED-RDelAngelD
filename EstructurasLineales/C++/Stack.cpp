#include "Stack.h"

//Constructor por defecto
template <typename T>
Stack<T>::Stack() {
	top = NULL;
	size = 0;
}
//Constructor con primer elemento
template <typename T>
Stack<T>::Stack(T d) {
	Node<T> *node = new Node<T>(d);
	top = node;
	size=1;
}
//Destructor
template <typename T>
Stack<T>::~Stack() {}
//Devuelve el tamaño de la pila
template <typename T>
int Stack<T>::getSize() {
	return size;
}
//Coloca encima, recibe lo que colocara encima
template <typename T>
void Stack<T>::push(T d) {
	Node<T> *node = new Node<T>(d);
	node->next = top;
	top = node;
	size++;
}
//Elimia el valor de la cima de la pila y lo devuelve
template <typename T>
T Stack<T>::pop() {
	if (size>0) {
		T d = top->data;
		top = top->next;
		size--;
		return d;
	}
	else {
		return NULL;
	}
}

template <typename T>
T Stack<T>::getTop() {
	if (size > 0) {
		return top->data;
	}
	else {
		return NULL;
	}
}

template <typename T>
void Stack<T>::showStack() {
	Node<T> *t = top;
	while (t) {
		t->printS();
		t = t->next;
	}
	std::cout << "NULL" << endl;

}