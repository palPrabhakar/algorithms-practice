import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int[][] arr = new int[6][6];
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                arr[j][i] = in.nextInt();
            }
        }
        
        int max = -999;
        int sum = 0;
        for(int j = 0; j <= 3; j++){
            for(int i = 0; i <= 3; i++){
                sum = 0;
                for(int k = 0; k < 3; k++){
                    sum += arr[i+k][j];
                    sum += arr[i+k][j+2];    
                }
                sum += arr[i+1][j+1];
                if(max < sum) max = sum;
            }
        }
        
        System.out.print(max);
    }
}