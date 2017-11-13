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
public class AVLTree {
    //Atributos
    //Raiz
    private AVLNode root;
    
    //Constructor
    public AVLTree(){
        this.root = null;
    }
    
    public AVLNode getRoot(){
        return this.root;
    }
    
    //Buscar un nodo
    public AVLNode fetch(int d, AVLNode r){
        if(root == null){//No hay nodos
            return null;
        }else if(root.data == d){//Si el dato esta en la raiz
            return root;
        }else if(root.data < d){//Si el dato es mayor a la raiz //Si se encesita repetir se agrega igual
            return fetch(d, r.right);//Lo buscamos por la derecha
        }else{
            return fetch(d, r.left);//Izquierda
        }
    }
    
    //Obtener factor de balance
    public int getBF(AVLNode node){
        if(node == null){
            return -1;//Para que sea 0
        }else{
            return node.bf;
        }
    }
    
    //Recalcular factor de balance
    public int calcBF(AVLNode node){
        return Math.max(getBF(node.left), getBF(node.right))+1; //De los datos que me regrese el valor mayor y que le sume uno
    }
    
    //Su altura subarbol derecho menos subarbol izquierdo
    //Numero negativo hay una ligera degeneración hacia la izquierda
    //Rotacion simple a la derecha
    public AVLNode rightRotation(AVLNode r){
        //Declaramos un auxiliar
        AVLNode aux = r.left;
        r.left = aux.right;
        aux.right = r;
        r.bf = calcBF(r);
        aux.bf = calcBF(aux);
        return aux;
    }
    
    //Rotacion simple a la izquierda
    public AVLNode leftRotation(AVLNode r){
        //Declaramos un auxiliar
        AVLNode aux = r.right;
        r.right = aux.left;
        aux.left = r;
        r.bf = calcBF(r);
        aux.bf = calcBF(aux);
        return aux;
    }
    
    //Rotacion doble a la derecha
    public AVLNode dRightRotation(AVLNode r){
        r.left = rightRotation(r.left);
        return leftRotation(r);
    }
    
    //Rotacion doble a la izquierda
    public AVLNode dLeftRotation(AVLNode r){
        AVLNode aux;
        r.right = leftRotation(r.right);
        aux = rightRotation(r);
        return aux;
    }
    
    //Insertar nodo AVL
    private AVLNode insertAVL(AVLNode n, AVLNode sr){//n es el nuevo nodo, sr es un apuntador
        AVLNode newDAD = sr;
        if(n.data < sr.data){//Si el dato que estoy recibiendo es menor al dato de root
            if(sr.left == null){//Si esta nulo lo inserta
                sr.left = n;
            }else{//Si no es nulo
                sr.left = insertAVL(n, sr.left);//insertAVL siempre va a regresar un apuntador de nodo //sr.left es nuestro auxiliar
                if((getBF(sr.left)-getBF(sr.right))==2){//Para verificar si esta balanceado (factor de balance)
                    if(n.data < sr.left.data){//¿Que metodo de balanceo se va a utilizar?
                        newDAD = leftRotation(sr);
                    }else{
                        newDAD=dLeftRotation(sr);
                    }
                }
            }
        }else if(n.data > sr.data){
            if(sr.right == null){
                sr.right = n;
            }else{
                sr.right = insertAVL(n, sr.right);
                if((getBF(sr.right)-getBF(sr.left))==2){
                    if(n.data > sr.right.data){
                        newDAD = rightRotation(sr);
                    }else{
                        newDAD = dRightRotation(sr);
                    }
                }
            }
        }else{
            System.out.println("El nodo está duplicado");
        }
        //ACTUALIZAR BF
        if(sr.left == null && sr.right != null){
            sr.bf = sr.right.bf + 1;
        }else if(sr.right == null && sr.left != null){
            sr.bf = sr.left.bf+1;
        }else{
            sr.bf = calcBF(sr);
        }
        return newDAD;
    }
    
    //Insertar
    public void insert(int d){
        AVLNode node = new AVLNode(d);
        if(root == null){
            root = node;
        }else{
            root = insertAVL(node, root);
        }
    }
    
    //Recorridos
    public void inOrden(AVLNode r){
        if(r != null){
            inOrden(r.left);
            System.out.println(Integer.toString(r.data));
            inOrden(r.right);
        }
    }
    
    public void preOrden(AVLNode r){
        if(r != null){
            System.out.println(Integer.toString(r.data));
            preOrden(r.left);
            preOrden(r.right);
        }
    }
    
    public void postOrden(AVLNode r){
        if(r != null){
            postOrden(r.left);
            postOrden(r.right);
            System.out.println(Integer.toString(r.data));
        }
    }
}
