import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
      //  int[] rarr = new int[n];
        for(int i = n-1; i >= 0; i--) {
            arr[i] = in.nextInt();
        }
        
        for(int i = 0; i < n; i++) {
            System.out.printf("%d ",arr[i]);
        }
    }
}