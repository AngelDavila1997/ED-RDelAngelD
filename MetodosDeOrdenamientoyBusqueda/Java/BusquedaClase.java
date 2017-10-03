/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.rdelangeld.a03;


/**
 *
 * @author A01411440
 */
public abstract class BusquedaClase {
    protected int[] vector;
    
    abstract int fetch(int n);//Metodo abstracto de busqueda

    public void setVector(int[] v){
        this.vector = v;
    }
    
    public int[] randomV(int n){//Llena con numeros aleatorios un arreglo
        int[]v = new int[n];     
        for (int i = 0; i<v.length; i++){//Mientras que el valor de i sea menor que el tamaño del arreglo, i se aumentara en 1
             v[i] = (int) (Math.random()*125);
        }
        return v;
    }

    public int[] getVector() {
        return vector;
    }
    
    public void showVector(){//Mostrara el contenido del vector
        String vec;
        vec = "[";
            for(int i=0; i<vector.length; i++){ //Mientras que i sea menor que el tamaño del arreglo, i aumentara 1                                     
                vec += " " + vector[i]; //Por lo tanto se guardara en vec, i siendo la posicion
                                        //i regresa al for y como es menor se le suma 1 y baja de nuevo    
        }
            vec += "]";
            System.out.println(vec);
    }
    
    public void showF(int f){//Imprime el valor de la busqueda
        if(f >= 0){
        System.out.println("La posición del numero es: " + f);   
        }else{
            System.out.println("El numero no se encuentra en el arreglo");
        }
    }
    
}
