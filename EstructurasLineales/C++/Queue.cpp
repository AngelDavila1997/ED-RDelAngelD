#include "Queue.h"

template <typename T>
Queue<T>::Queue() {
	front = rear = NULL;
	size = 0;
}

template <typename T>
Queue<T>::Queue(T d) {//Al ingresar instanciamos un nodo y hacemos que front y rear apunten al nuevo nodo.
	Node<T> *node = new Node<T>(d);
	front = rear = node;
	size = 1;
}

template <typename T>
Queue<T>::~Queue() {}

template <typename T>
void Queue<T>::enqueue(T d) {
	Node<T> *node = new Node<T>(d);
	if (isEmpty()) {//Si esta vacio
		front = rear = node;
		size = 1;
	}
	else {
		rear->next = node;
		rear = node;
		size++;
	}
}

template <typename T>
T Queue<T>::dequeue() {//QUITAR (ELIMINA Y DEVUELVE)
	if (isEmpty()) {
		return NULL;
	}
	else {
		Node<T> *fd = front; //Declara un apuntador
		front = front->next; //Avanza front
		size--;//Reduce el tamaño
		return fd->data; //Regresa el dato del nodo borrado
	}
}

template <typename T>
T Queue<T>::getFront() {
	if (isEmpty()) {
		return NULL;
	}
	else {
		return front->data;
	}
}

template <typename T>
int Queue<T>::getSize() {
	return size;
}

template <typename T>
bool Queue<T>::isEmpty() {
	return size == 0;
}

template <typename T>
void Queue<T>::clearQueue() {
	front = rear = NULL;
	size = 0;
}

template <typename T>
void Queue<T>::showQueue() {
	std::cout << "front->";
	Node<T>* p = front;
	if (!p) std::cout << "NULL"; //Si el puntero es nulo es FALSO (aqui se niega el nulo por lo cual es VERDADERO)
	while (p) {
		p->print();
		p = p->next;
	}
	std::cout << "<-rear" << endl;
}