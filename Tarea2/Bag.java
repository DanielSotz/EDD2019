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
public class Bag {
    
    
    class Element {        
        protected Element prev,next;
        public String info;       
    }
    
    private Element first;
    private int size;
    
    public Bag(){
        first=null;
    }
    
    public void insert(String text){
        Element other = new Element();
        other.info = text;
        if(first == null){
            other.next = other;
            other.prev = other;
            first= other;
        } else{
            Element last = first.prev;
            other.next = first;
            other.prev= last;
            first.prev = other;
            last.next = other;
            first = other;
        }
        size ++;
    }
    
    public boolean isEmpty(){
        return first == null;
    }
    
    public int  counting(String text){
        int num=0;
        int count=0;
        while(count <= size){
            Element temp = first;
            if(temp.info == text){
                num++;                
            }
            temp=temp.next;
            count++;            
        }
        return num;        
    }
    
    
      
  
    
    
    
}
