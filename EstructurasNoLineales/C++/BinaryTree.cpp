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

BinaryTree::~BinaryTree() {};

//Inserta un elemento en el arbol
void BinaryTree::insert(int d, Leaf *root) {
	//Elementos iguales dependen del arbol
	if (root) {
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
		this->root = new Leaf(d);//Inserta el primer elemento del arbol. Usamos this donde no le asigna nada. Hago referencia directa al root de ese arbol.
		leaves = 1;
	}
}
//Muestra el contenido del elemento
void BinaryTree::showLeaf(Leaf *root) {
	root->print();
}

//Buscamos un dato dentro del arbol. Va a buscar donde esta, no el valor.
Leaf *BinaryTree::fetch(int d, Leaf *root) {
	if (root) {
		if (d == root->getData()) {//Si el dato que estoy buscando es igual al de root
			return root;
		}else if (d < root->getData()) {//Si es menor, al de la izquierda
			return fetch(d, root->left);
		}else {
			return fetch(d, root->right);//Si es mayor o igual a la derecha
		}
	}else {
		return NULL;
	}
}

//Encuentra la raiz anterior
Leaf *BinaryTree::getFather(Leaf *leaf, Leaf *root) {
	//Si hay arbol, y si la hoja es diferente a root
	if (root && leaf != root) {//Root no tiene padre
		if (root->left == leaf || root->right == leaf) {
			return root;
		}else if (leaf->getData() < root->getData()) {//Me voy por la izquierda o la derecha? Si el dato de la hoja que busco es menor que el dato de la hoja donde estoy en este momento
			return getFather(leaf, root->left);//Se va por la izquierda
		}else {
			return getFather(leaf, root->right);//Se va por la derecha
		}
	}
}
/*
Eliminar una hoja hay tres casos
1. Borrar elemento sin hijos
2. Borrar elemento con un sub arbol hijo
3. Borrar elemento con dos sub arboles hijos
*/
bool BinaryTree::deleteLeaf(int d, Leaf *root) {
	//Hacemos la busqueda del nodo y de su padre
	Leaf *f, *s;
	s = fetch(d, root); //Son Validar que es !NULL
	f = getFather(s, root); //Father

	//Preguntamos si tiene hijos
	bool l = s->left ? true : false;//IF hay un elemento a la izquierda
	bool r = s->right ? true : false; //bool r = s->right

	//Si no tiene hijos
	if (!l && !r) {
		//Eliminamos nodo segun caso 1
		//Si es el hijo de la izquierda, la apuntamos a NULL, caso contrario apuntamos hijo derecho a NULL.
		f->left == s ? f->left = NULL : f->right = NULL;
		return true;
	}else if (!l && r) {
		//Eliminamos nodo segun caso 2, solo hijos a la derecha
		if (f->left == s) {//Si es el hijo de la izquierda
			f->left = s->right;//los hijos derechos del nodo eliminado se cuelgan en el brazo izquierdo de su padre
		}else {//Si es el hijo de la derecha
			f->right = s->right;//los hijos derechos del nodo eliminado se cuelgan del brazo derecho de su padre
		}
		return true;
	}else if (l && !r) {
		//Eliminamos nodo segun caso 2, solo hijos de la izquierda
		if (f->left == s) {
			f->left = s->left;
		}else {
			f->right = s->left;
		}
		return true;
	}else if (l && r) {
		//Eliminamos nodo segun caso 3
		return true;
	}else {
		return false;
	}
}

//isEmpty, solo funciona para la raiz principal del arbol
bool BinaryTree::isEmpty() {
	return !root;
}

//Devuelve un apuntador a raiz
Leaf *BinaryTree::getRoot() {
	return this->root;
}

//Devuelve la altura del arbol
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

//Devuelve la cantidad de hojas del arbol
int BinaryTree::getLeaves() {
	return leaves;
}


