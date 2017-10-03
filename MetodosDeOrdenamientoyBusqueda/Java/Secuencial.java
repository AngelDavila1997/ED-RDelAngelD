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
public class Secuencial extends BusquedaClase{
    
    @Override
    int fetch(int n) {//Se escribe dentro del metodo
         for(int i = 0; i < vector.length; i++){ //Ciclo for
            if(vector[i] == n){//Si el valor dentro de esa posicion de vector es igual al valor enviado
                System.out.println("Realizando busqueda secuencial..");
                return i;//Regresara la posicion
            }           
        }
         System.out.println("Realizando busqueda secuencial..");
        return -1;//Sino regresara -1 (posicion que no existe)
    }
    
}
