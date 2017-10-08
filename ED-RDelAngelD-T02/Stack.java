/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.rdelangeld.t02;

/**
 *
 * @author A01411440
 * @param <T>
 */
public class Stack <T>{
    private Node<T> top;
    private int size;

    public Stack() {
        this.top = null;
        this.size = 0;
    }
    public Stack(T d) {
        Node <T> node = new Node(d);
        this.top = node;
        this.size = 1;
    }

    public int getSize() {
        return size;
    }
    
    public void push(T d){
        Node <T> node = new Node(d);
        node.next = top;
        top = node;
        size++;
    }
    
    public T pop(){
        if (size>0) {
		T d = top.data;
		top = top.next;
		size--;
		return d;
	}
	else {
		return null;
	}
    }

    public T getTop() {
        if (size > 0) {
		return top.data;
	}
	else {
		return null;
	}
    }
    
    public boolean isEmpty(){
        return size==0;
    }
    
    public void showStack(){
        Node<T> t = top;
	while(t!=null) {
		t.printS();
		t = t.next;
	}
	       System.out.println("NULL");
    }
    
}