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
        MyList <String> Lista = new  MyList() ;
        System.out.println("Inserta 10");
        Lista.insertFirst("10");
        Lista.showList();
        System.out.println("Inserta 200");
        Lista.insertLast("200");
        Lista.showList();
        System.out.println("Inserta 30");
        Lista.insertLast("30");
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
        //MAIN DE STACK
        Stack<String> pila = new Stack();
    
    //std::cout<<pila.getSize()<<"\n";
    pila.push("1");
    //std::cout<<pila.ge
    pila.push("10");
    pila.push("40");
    pila.push("2");
    pila.push("102");
    pila.push("893");
    pila.showStack();
    String a = pila.getTop();
    System.out.println("Mostramos el elemento" + a + "\n" + "Mostramos pila" + "\n");
    pila.showStack();

    }
    
}
