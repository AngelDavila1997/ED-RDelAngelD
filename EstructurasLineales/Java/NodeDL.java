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
public class NodeDL <T>{
    T data;
    NodeDL next;
    NodeDL prev;
    
    NodeDL(T d){
        this.data = d;
        this.next = null;//Apunta a nulo
        this.prev = null;//Apunta a nulo
    }
    
     public void print(){
        System.out.print(data + "<=>");
    }
}
