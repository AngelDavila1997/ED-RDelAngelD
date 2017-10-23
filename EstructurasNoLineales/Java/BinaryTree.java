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
        if(!isEmpty()){
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
            root = new Leaf(d);
            leaves = 1;
        }
    }
    public void showLeaf(Leaf root){
        root.print();
    }
    public void deleteLeaf(int d){
        
    }
    public boolean isEmpty(){
        
    }
    public Leaf getRoot(){
        
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
        
    }
}
