/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.list;

/**
 *
 * @author A01411440
 * @param <T>
 */
public class MyCList <T> {
    Node pivot;
    Node pointer;
    int length;
    
    MyCList(){
        this.pivot=null;
        this.pointer=null;
        this.length=0;
    }
    MyCList(T d){
        Node node = new Node(d);
        pivot=node.next=node;
        length++;
    }
    public boolean isEmpty(){
        return length == 0;
    }
    public void insert(T d){
        Node node = new Node(d);
        if(isEmpty()){
            pivot=node.next=node;
        }else{
            node.next=pivot.next;
            pivot.next=node;
        }
        length++;
    }
    public void deleteNode(T d) {
        if(!isEmpty()){
            if(pivot.data==d){
                pivot=pivot.next;
                length-=1;
                return;
            }
            pointer=pivot;
            do{
                if(pointer.next.data==d){
                    pointer.next=pointer.next.next;
                    pointer= null;
                    length-=1;
                    return;
                } else pointer=pointer.next;
            } while(pointer!= pivot);
        }
    }
    //Vaciar lista
    public void deleteList(){
        pivot = pointer = null;
    }
    public void print(){
        pointer = pivot;
        System.out.print("first->");
        for(int i = 0; i<length ; i++){
            System.out.print("[" + pointer.data.toString() + "]->");
            pointer = pointer.next;
        }
        System.out.println("<-last");
    }
}
