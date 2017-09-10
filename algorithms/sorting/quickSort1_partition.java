import java.util.*;
public class Solution {
    
    static void partition(int[] ar) {
        int x = ar[0];
        int i = 0;
        int temp; 
        
        for (int j = 1; j < ar.length; j++) {
            if (ar[j] < x) {
               temp = ar[i+1];
               ar[i+1] = ar[j];
               ar[j] = temp; 
               i++;
            }
        }
        
        ar[0] = ar[i];
        ar[i] = x;
        
    }   
    
    static void printArray(int[] ar) {
         for(int n: ar){
            System.out.print(n+" ");
         }
           System.out.println("");
    }
       
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int n = in.nextInt();
       int[] ar = new int[n];
       for(int i=0;i<n;i++){
          ar[i]=in.nextInt(); 
       }
       partition(ar);
       printArray(ar); 
    }    
}
