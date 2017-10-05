#include "DLNode.h"

template <typename T>
DLNode<T>::DLNode(T d) {
	next = back = NULL;
	data = d;
}

template <typename T>
DLNode<T>::~DLNode() {}

template <typename T>
void DLNode<T>::print() {
	std::cout << data << "<=>";
}