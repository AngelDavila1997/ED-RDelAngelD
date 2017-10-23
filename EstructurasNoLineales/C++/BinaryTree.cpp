#include "BinaryTree.h"

BinaryTree::BinaryTree() {
	root = NULL;
	leaves = 0;
}

BinaryTree::BinaryTree(int d) {
	Leaf *leaf = new Leaf(d);
	root = leaf;
	leaves = 1;
}

BinaryTree:~BinaryTree();

void BinaryTree::insert(int d, Leaf *root) {
	//Elementos iguales dependen del arbol
	if (!isEmpty()) {
		if (d < root->getData()) {
			if (!root->left) {//Si no hay un dato para regresar nulo
				root->left = new Leaf(d);//Inserta a la izquierda
				leaves++;
			}else {
				insert(d, root->left);
			}
		}else {//Mayores o iguales
			if (!root->right) {//Inserta a la derecha
				root->right = new Leaf(d);
				leaves++;
			}else {
				insert(d, root->right);
			}
		}
	}else {
		root = new Leaf(d);//Inserta el primer elemento del arbol
		leaves = 1;
	}
}

void BinaryTree::showLeaf(Leaf *root) {
	root->print();
}

int BinaryTree::height(Leaf *root) {
	if (isEmpty()) {
		return 0;
	}else {
		int a, b;
		if (!root->left && !root->right) {//Solo esta la raiz
			return 1;
		}
		else {
			a = height(root->left);
			b = height(root->right);
			if (a > b) {
				return a + 1;
			}else {
				return b + 1;
			}
		}
	}
}