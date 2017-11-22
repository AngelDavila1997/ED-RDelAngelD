

#include <iostream>
//#include <string>
//#include "DLList.h"
//#include "CList.h"
//#include "DLNode.h"
//#include "List.h"
//#include "Node.h"
//#include "Stack.cpp"
//#include "Queue.h"
#include "Graph.h"

using namespace std;



int main(int argc, const char * argv[]) {
	Graph grafo = *new Graph(6);

	grafo.insertE(1, 2, 10.3);
	grafo.insertE(2, 3, 3.5);
	grafo.insertE(3, 1, 7.33);
	grafo.insertE(1, 4, 4.89);
	grafo.insertE(4, 3, 1.9);
	grafo.insertE(4, 4, 0.0);
	grafo.insertE(2, 1, 3.0);
	grafo.insertE(3, 5, 7.0);
	grafo.insertE(5, 2, 8.0);
	grafo.insertE(3, 6, 1.0);
	grafo.insertE(6, 4, 0.9);

	std::cout << grafo.to_string();
	std::cout << grafo.DFS(1);
	std::cout << grafo.BFS(1);

	return 0;
	/*
	DLList<string> Lista = *new DLList<string>();

	Lista.showList();
	Lista.insertFirst("A");
	Lista.showList();
	Lista.insertFirst("B");
	Lista.showList();
	Lista.insertLast("C");
	Lista.insertLast("C");
	Lista.showList();
	Lista.insertLast("D");
	Lista.showList();
	Lista.showListbyAddress();
	Lista.deleteNode("C");
	Lista.showList();
	Lista.insertFirst("E");
	Lista.showList();
	Lista.deleteLast();
	Lista.showList();
	Lista.deleteFirst();
	Lista.showList();
	Lista.deleteList();
	Lista.showList();
	*/

	/*
	Stack<int> pila = *new Stack<int>();

	//std::cout<<pila.getSize()<<"\n";
	pila.push(1);
	//std::cout<<pila.getSize()<<"\n";
	pila.push(10);
	pila.push(40);
	pila.showStack();
	pila.push(2);
	pila.push(102);
	pila.push(893);
	pila.showStack();
	//std::cout<<pila.getSize()<<"\n";
	//std::cout<<pila.pop()<<"\n";
	//std::cout<<pila.getSize()<<"\n";
	//pila.showStack();

	*/

	/*
	//MAIN DE QUEUE
	Queue <string> fila = *new Queue<string>;
	fila.enqueue(" esta");
	fila.enqueue(" es");
	fila.enqueue(" una");
	fila.enqueue(" fila");
	fila.showQueue();
	fila.dequeue();
	fila.showQueue();
	fila.enqueue(fila.dequeue());
	fila.showQueue();
	fila.clearQueue();
	*/
	/*
	Contacto contacto = *new Contacto("Ricardo Angel","Del Angel", "A01411440@itesm.mx","123456789")
	Queue <Contacto> fila = *new Queue<Contacto>;
	fila.enqueue(" esta");
	fila.enqueue(" es");
	fila.enqueue(" una");
	fila.enqueue(" fila");
	fila.showQueue();
	fila.dequeue();
	fila.showQueue();
	fila.enqueue(fila.dequeue());
	fila.showQueue();
	fila.clearQueue();
	*/

          //std::cout << "Hola mundo" << endl;
		//return 0;

}