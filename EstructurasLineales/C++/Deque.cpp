#include "Deque.h"

template <typename T>
Deque<T>::Deque() {
	front = NULL;
	rear = NULL;
	size = 0;
}

template <typename T>
Deque<T>::Deque(T d) {
	DLNode<T> *node = new DLNode<T>(d);
	front = rear = node;
	size = 1;
}

template <typename T>
Deque<T>::~Deque() {}

template <typename T>
void Deque<T>::enqueueFront(T d) {
	DLNode<T> *node = new DLNode<T>(d);
	if (isEmpty()) {
		front = rear = node;
	}else{
		node->next = front;
		front->back = node;
		front = node;
	}
	size++;
}

template <typename T>
void Deque<T>::enqueueRear(T d) {
	if (isEmpty()) {
		enqueueFront(d);
	}
	else {
		DLNode<T> *node = new DLNode<T>(d);
		rear->next = node;
		node->back = rear;
		rear = node;
		size++;
	}
}

template <typename T>
T Deque<T>::dequeueFront() {
	if (!isEmpty()) {
		DLNode<T> *fd = front;//Declarando un apuntador y asignandole el valor que tiene data en el apuntador front
		if (size == 1) {
			clearDeque();
		} else {
			front = front->next;
			front->back = NULL;
			fd->next = NULL;//NAMAS PORQUE SI
			size--;
		}
		return fd->data;
	} else {
		return NULL;
	}
}

template <typename T>
T Deque<T>::dequeueRear() {
	if (!isEmpty()) {
		DLNode<T> *rd = rear;
		if (size == 1) {
			clearDeque();
		}
		else {
			rear = rear->back;
			rear->next = NULL;
			rd->back = NULL;//ESTA GENTE
			size--;
		}
		return rd->data;
	} else {
		return NULL;
	}
}

template <typename T>
T Deque<T>::getFront() {
		return front->data;
}

template <typename T>
T Deque<T>::getRear() {
		return rear->data;
}

template <typename T>
int Deque<T>::getSize() {
	return size;
}

template <typename T>
bool Deque<T>::isEmpty() {
	return size == 0;
}

template <typename T>
void Deque<T>::clearDeque() {
	front = rear = NULL;
	size = 0;
}

template <typename T>
void Deque<T>::showDeque() {
	std::cout << "front->";
	DLNode<T>* p = front;
	if (!p) std::cout << "NULL";
	while (p) {
		p->print();
		p = p->next;
	}
	std::cout << "<-rear" << endl;
}


