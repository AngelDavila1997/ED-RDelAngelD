/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package estructurasnolineales;

/**
 *
 * @author A01411440
 */
public class AVLNode {
    int data, bf;//dato y factor de equilibrio
    AVLNode left, right;
    
    public AVLNode(int data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
}
