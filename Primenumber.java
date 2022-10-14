/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package primenumber;
import java.util.Scanner;

/**
 *
 * @author Rakibul Hassan
 */
public class Primenumber {

         public static void main(String args[]) 
              { 
                   int num,b,c; 
                   Scanner s=new Scanner(System.in); 
                   System.out.println("Enter A Number"); 
                   num =s.nextInt(); 
                   b=1; 
                   c=0; 
                    while(b<= num) 
                       { 
                           if((num%b)==0) 
                              c=c+1; 
                              b++; 
                       } 
                        if(c==2) 
                        System.out.println(num +" is a prime number"); 
                        else 
                        System.out.println(num +" is not a prime number"); 
              } 
 } 