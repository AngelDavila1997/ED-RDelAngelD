
#include <iostream>
#include <string>
//#include "DLList.cpp"
//#include "CList.cpp"
//#include "Stack.cpp"
//#include "List.cpp"
#include "Queue.cpp"
using namespace std;



int main(int argc, const char * argv[]) {
	/*
	//MAIN DE LISTA ENLAZADA
	List <string> Lista = *new  List<string>() ;
	Lista.insertLast("10");
	Lista.showList();
	Lista.insertFirst("200");
	Lista.showList();
	Lista.insertLast("30");
	Lista.showList();
	Lista.insertFirst("11");
	Lista.showList();
	Lista.deleteNode("200");
	Lista.showList();
	Lista.deleteNode("30");
	Lista.showList();
	*/
	/*
	//MAIN DE LISTA CIRCULAR
	CList <string> Lista = *new  CList<string>() ;
	Lista.insert("10");
	Lista.showList();
	Lista.insert("200");
	Lista.showList();
	Lista.insert("30");
	Lista.showList();
	Lista.deleteNode("30");
	Lista.showList();
	Lista.deleteNode("200");
	Lista.showList();
	/*
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
	//pila.showStack();
	pila.push(2);
	pila.push(102);
	pila.push(893);
	pila.showStack();
	int a = pila.getTop();
	std::cout<<"Mostramos el elemento "<<a<<endl<<"Mostramos Pila"<<endl;
	pila.showStack();
	pila.pop();
	pila.showStack();
	//std::cout<<pila.getSize()<<"\n";
	//std::cout<<pila.pop()<<"\n";
	//std::cout<<pila.getSize()<<"\n";
	//pila.showStack();
	*/
	
	Queue<string> fila = *new Queue<string>;
	fila.enqueue(" esta");
	fila.enqueue(" es");
	fila.enqueue(" una");
	fila.enqueue(" fila");
	fila.showQueue();
	fila.dequeue();
	fila.showQueue();
	fila.enqueue(fila.dequeue());
	fila.showQueue();
	std::cout << fila.getSize() << " elementos en la fila, |" << fila.getFront() << "| es el primer elemento de la fila" << endl;
	fila.showQueue();
	fila.clearQueue();
	fila.showQueue();
	
	cin.get();
	return 0;
}