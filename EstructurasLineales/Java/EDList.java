/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.list;

/**
 *
 * @author A01411440
 */
public class EDList {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        /*
        //MAIN DE LISTA ENLAZADA
        MyList <String> Lista = new  MyList();
        System.out.println("Inserta 10 al principio");
        Lista.insertLast("10");
        Lista.showList();
        System.out.println("Inserta 200 al final");
        Lista.insertFirst("200");
        Lista.showList();
        System.out.println("Inserta 30 al final");
        Lista.insertLast("30");
        Lista.showList();
        System.out.println("Inserta 11 al principio");
        Lista.insertFirst("11");
        Lista.showList();
        System.out.println("Borra 200");
        Lista.deleteNode("200");
        Lista.showList();
        System.out.println("Borra 30");
        Lista.deleteNode("30");
        Lista.showList();
        */
        /*
        //MAIN DE LISTA DOBLEMENTE ENLAZADA
        MyDLList <String> Lista = new MyDLList();
        Lista.insertFirst("10");
        Lista.insertFirst("8");
        Lista.insertLast("4");
        Lista.showListFirstLast();
        System.out.println("\n");
        Lista.showListLastFirst();
        System.out.println("\n");
        Lista.deleteNode("10");
        Lista.showListFirstLast();
        System.out.println("\n");
        Lista.insertFirst("12");
        Lista.insertLast("5");
        Lista.showListFirstLast();
        System.out.println("\n");
        Lista.deleteLast();
        Lista.showListFirstLast();
        System.out.println("\n");
        Lista.deleteFirst();
        Lista.showListFirstLast();
        System.out.println("\n");
        */
        /*
        //MAIN DE LISTA CIRCULAR
        MyCList <String> Lista = new  MyCList() ;
        System.out.println("Inserta 10");
        Lista.insert("10");
        Lista.print();
        System.out.println("Inserta 200");
        Lista.insert("200");
        Lista.print();
        System.out.println("Inserta 30");
        Lista.insert("30");
        Lista.print();
        System.out.println("Borra 30");
        Lista.deleteNode("30");
        Lista.print();
        System.out.println("Borra 200");
        Lista.deleteNode("200");
        Lista.print();  
        */
        /*
        //MAIN DE STACK
        Stack<String> pila = new Stack();
        pila.push("1");
        pila.push("10");
        pila.push("40");
        pila.push("2");
        pila.push("102");
        pila.push("893");
        pila.showStack();
        String a = pila.getTop();
        System.out.println("Mostramos el elemento" + a + "\n" + "Mostramos pila" + "\n");
        pila.showStack();
        */
        /*
        //MAIN DE QUEUE
        Queue<String> fila = new Queue();
        fila.enqueue(" esta");
        fila.enqueue(" es");
        fila.enqueue(" una");
        fila.enqueue(" fila");
        fila.showQueue();
        fila.dequeue();
        fila.showQueue();
        fila.enqueue(fila.dequeue());
        fila.showQueue();
        System.out.println(fila.getSize() + " elementos en la fila, |" + fila.getFront() + "| es el primer elemento de la fila");
        fila.showQueue();
        fila.clearQueue();
        fila.showQueue();
        */
        
        //MAIN DEQUE
        Deque <String> fila = new Deque();
        fila.enqueueFront(" esta");
        fila.enqueueRear(" es");
        fila.showDeque();
        fila.enqueueFront("vava");
        fila.showDeque();
        fila.dequeueFront();
        fila.showDeque();
        fila.dequeueRear();
        fila.showDeque();
        fila.clearDeque();
        fila.showDeque();
    }
    
}
