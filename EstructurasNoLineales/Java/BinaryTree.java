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
public class BinaryTree {
    private Leaf root;
    private int leaves;
    
    BinaryTree(){
        root = null;
        leaves = 0;
    }
    BinaryTree(int d){
        Leaf leaf = new Leaf(d);
        root = leaf;
        leaves = 1;
    }
    
    public void insert(int d, Leaf root){
        if(root != null){
            if(d < root.getData()){
                if(root.left == null){
                    root.left = new Leaf(d);
                    leaves++;
                }else{
                    insert(d, root.left);
                }
            }else{
                if(root.right == null){
                    root.right = new Leaf(d);
                    leaves++;
                }else{
                    insert(d, root.right);
                }
            }
        }else{
            this.root = new Leaf(d);
            leaves = 1;
        }
    }
    public void showLeaf(Leaf root){
        root.print();
    }
    
    public Leaf fetch(int d, Leaf root){
        if(root != null){
            if(d == root.getData()){
                return root;
            }else if(d < root.getData()){
                return fetch(d, root.left);
            }else{
                return fetch(d, root.right);
            }
        }else{
            return null;
        }
    }
    
    public Leaf getFather(Leaf leaf, Leaf root){
        //Si hay arbol y si la hoja es diferente a root
        if(root != null && leaf != root){
            if(root.left == leaf || root.right == leaf){
                return root;
            }else if(leaf.getData() < root.getData()){
                return getFather(leaf, root.left);
            }else{
                return getFather(leaf, root.right);
            }
        }else{
            return null;
        }
    }
    /*
 ***Eliminar una hoja, hay 3 casos
 1. Borrar elemento sin hijos
 2. Borrar elemento con un sub arbol hijo
 3. Borrar elemento con dos sub arboles hijos
*/
    public boolean deleteLeaf(int d, Leaf root){
        //hacemos la búsqueda del nodo y de su padre
      Leaf f, s;
      s = fetch(d, root);
      f = getFather(s, root);
      
      //Preguntamos si tiene hijos
      boolean l = s.left != null;
      boolean r = s.right != null;
      
      //Si no tiene hijos
      if(!l && !r){
        //Eliminamos nodo según caso 1
        //Si es el hijo de la izquierda, la apuntamos a NULL, caso contrario apuntamos hijo derecho a NULL.
        if(f.left == s){
            f.left = null;
        }else{
            f.right = null;
        }
        return true;
      }else if(!l && r){
          //Eliminamos nodo según caso 2, solo hijos a la derecha
        if (f.left == s){ //Si es el hijo de la izquierda
            f.left = s.right; //los hijos derechos del nodo eliminado se cuelgan en el brazo izquierdo de su padre
        }else{ //Si es el hijo de la derecha
            f.right = s.right;//los hijos erechos del nodo eliminado se cuelgan del brazo derecho de su padre
        }
        return true;
      }else if(l && !r){
          //Eliminamos nodo según caso 2, solo hijos a la izquierda
        if (f.left == s){
            f.left = s.left;
        }else{
            f.right = s.left;
        }
        return true;
      }else if(l && r){
          //Eliminamos nodo segun caso 3
          return true;
      }else{
          return false;
      }
    }
    
    public boolean isEmpty(){
        return root == null;
    }
    
    public Leaf getRoot(){
        return this.root;
    }
    
    public int height(Leaf root){
        if(isEmpty()){
            return 0;
        }else{
            int a,b;
            if(root.left == null && root.right == null){
                return 1;
            }else{
                a = height(root.left);
                b = height(root.right);
                if(a > b){
                    return a + 1;
                }else{
                    return b + 1;
                }
            }
        }
    }
    public int getLeaves(){
        return leaves;
    }
}
