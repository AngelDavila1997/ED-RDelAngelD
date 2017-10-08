/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.rdelangeld.t02;

import java.util.*;

/**
 *
 * @author A01411440
 */
public class EDRDelAngelDT02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        while(true){
            options(menu());
        } 
    }
    
    public static int menu(){
        int option;
        Scanner teclado = new Scanner(System.in); //Entrada de teclado para selección de opciones
       do{
        System.out.println("***Palindromes***");
        System.out.println("Menu:");
        System.out.println("0. Quit");
        System.out.println("1. What is a palindrome?");
        System.out.println("2. Check sentence or word");
        option=teclado.nextInt();
         }while (option <0 || option >= 3); //Mientras que la opcion ingresada sea menor que 0 O mayor igual a 7
                                           // seguira mostrando el menu
        return option;
    }
    public static void options(int choption){
        switch(choption){
            case 1:
                System.out.println("A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward as forward, such as madam or racecar.");
                break;
            case 2:
                check();
                break;
            default:
                exitMessage();
        }
     }
    public static void exitMessage(){
        System.out.println("Program closed.");
        System.exit(0);
    }
    public static void check(){
        Stack palindrome = new Stack();//Se crea una pila 
        System.out.println("Insert word / sentence");
        Scanner keyboard = new Scanner(System.in);
        String opalindrome = keyboard.nextLine().replaceAll(" ","");//replaceAll cambia los espacios por nulos
        
        char[]arr = opalindrome.toCharArray();//Nuestro string se vuelve un array de chars
        
        for(int i=0; i< arr.length ;i++){    //Se recorre el array y se coloca cada caracter en la pila
            palindrome.push(opalindrome.charAt(i));
        }
                
        String p = "";
        while(!palindrome.isEmpty()){//Mientas que la pila no este vacia
            p=p+palindrome.pop();//En p se guardan los datos que salen de la pila (palabra al reves)
        }
        
        if(opalindrome.equals(p)){
            System.out.println("It is a palindrome");
        }else{
            System.out.println("Not a palindrome");
        }
    }
}
