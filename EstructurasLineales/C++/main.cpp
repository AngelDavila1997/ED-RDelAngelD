

#include <iostream>
#include <string>
#include "DLList.h"
#include "CList.h"
#include "DLNode.h"
#include "List.h"
#include "Node.h"
using namespace std;



int main(int argc, const char * argv[]) {
	
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
	
	return 0;
}