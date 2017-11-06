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
public class EstructurasNoLineales {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BinaryTree arbol = new BinaryTree();
        arbol.insert(10,arbol.getRoot());
        arbol.insert(15,arbol.getRoot());
        arbol.insert(7,arbol.getRoot());
    }
    
}
