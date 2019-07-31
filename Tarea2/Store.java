/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package store;

/**
 *
 * @author Daniel Sotz
 */
public class Store {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Bag bag1=new Bag();
        
        System.out.println("------ isEmpty(bagEmpty) = true");
        
        if (bag1.isEmpty()){
            System.out.println(" true, is empty");
        } else{
            System.out.println(" false");
        }
        
        System.out.println("----- isEmpty(insert(b,apples)) = false");
        
                      
        bag1.insert("apples");        
        
        if (bag1.isEmpty()){
            System.out.println(" true, is empty");
        } else{
            System.out.println(" false");
        }
         
        System.out.println("---- count(bagEmpty,banana) = cero");       
        
        int c= bag1.counting("bananas");
        System.out.println(c);
        
        
      
        
        
       
    }
    
}
