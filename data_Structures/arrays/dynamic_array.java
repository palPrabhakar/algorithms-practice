import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int q = in.nextInt();
        int lastAns = 0;
        ArrayList<Integer>[] listSeq = (ArrayList<Integer>[]) new ArrayList[n];
        for(int i = 0; i < n; i++) {
            listSeq[i] = new ArrayList<Integer>();
        }
        
        int qtype;
        int x, y;
        int xInd, yInd;
        //int[] yN = new int[n];
        for(int i = 0; i < q; i++) {
            qtype = in.nextInt();
            x = in.nextInt();
            y = in.nextInt();
            
            if(qtype == 1){
                xInd = ((x^lastAns)% n);
                listSeq[xInd].add(y);
                //System.out.printf("%d \n", lastAns);
            }
            else {
                xInd = ((x^lastAns)%n);
                yInd =  y % listSeq[xInd].size();
            	//System.out.printf("%d %d %d \n", yInd, y, n);
                lastAns = listSeq[xInd].get(yInd);
                System.out.printf("%d \n", lastAns);
            }
            
        }       
    }
}