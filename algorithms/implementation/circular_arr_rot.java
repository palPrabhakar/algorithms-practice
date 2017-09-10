import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int q = in.nextInt();
        int[] arr = new int[n];
        int[] newPos = new int[n];
        
        
        
        for(int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
            newPos[(i+k)%n] = i;
        }
        
        for(int i = 0; i < q; i++) {
            System.out.println(arr[newPos[in.nextInt()]]);
        }
       
    }
}