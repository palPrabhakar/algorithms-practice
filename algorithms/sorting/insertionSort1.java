import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    

    public static void insertIntoSorted(int[] ar) {
        // Fill up this function  
        int n = ar.length;
        int e = ar[n-1];
        
        for(int i = n-2; i >= 0; i--) {
           
           if (i == 0 && ar[i] > e){
              ar[i+1] = ar[i];
             print(ar);
               ar[i] = e;
              print(ar);
           } 
           else if (ar[i] > e ) {
                ar[i+1] = ar[i];
                print(ar);
            }
            else {
                
                ar[i+1] = e;
                print(ar);
                break;
            }
           
        }
        
    }
    
    public static void print(int[] ar) {
        
        for(int i = 0; i < ar.length; i++) {
            System.out.printf("%d ", ar[i]);
        }
        System.out.printf("\n");
    }
    
    
/* Tail starts here */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
        for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
        }
        insertIntoSorted(ar);
    }
    
    
    private static void printArray(int[] ar) {
        for(int n: ar){
            System.out.print(n+" ");
        }
        System.out.println("");
    }
}
 
