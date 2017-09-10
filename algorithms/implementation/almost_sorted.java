import java.io.*;
import java.util.*;

public class Solution {
    
    public static Boolean isSorted(int[] arr, int start, int last){
        for(int i = start + 1 ; i <= last; i++) {
            if(arr[i] < arr[i-1]) return false;
        }
        return true;
    }
    
    
    public static Boolean isSortedR(int[] arr, int start, int last){
        for(int i = start + 1 ; i <= last; i++) {
            if(arr[i] > arr[i-1]) return false;
        }
        return true;
    }
    
    public static int[] index(int[] arr){
        int pos1 = -1, pos2 = -1;
        for(int i = 0; i < arr.length-1; i++){
            if(arr[i] > arr[i+1]) {
                pos1 = i;
                break;
            }
        }
        
        for(int i = arr.length-1; i >= 1; i--){
            if(arr[i] < arr[i -1]){
                pos2 = i;
                break;
            }
        }
        int[] pos = {pos1, pos2};
        return pos;
    }
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        
        if(isSorted(arr, 0, arr.length-1)) System.out.print("yes");
        else {
            int[] pos = index(arr);
            int temp1 = arr[pos[0]];
            int temp2 = arr[pos[1]];
            arr[pos[0]] = temp2;
            arr[pos[1]] = temp1;
            if(isSorted(arr, 0, arr.length-1)) {
                System.out.printf("yes\n");
                System.out.printf("swap %d %d\n", pos[0]+1, pos[1]+1);
            }
            else if(pos[0]+1 != pos[1]){
                arr[pos[0]] = temp1;
                arr[pos[1]] = temp2;
                if(isSortedR(arr, pos[0], pos[1])) {
                    System.out.printf("yes\n");
                    System.out.printf("reverse %d %d \n", pos[0]+1, pos[1]+1);
                }
                else System.out.printf("no\n");
            }
            else System.out.printf("no\n");
        }
        
    }
}