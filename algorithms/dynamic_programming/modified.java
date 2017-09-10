import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution.
        */
        Scanner in = new Scanner(System.in);
        String t0 = String.valueOf(in.nextInt());
        String t1 = String.valueOf(in.nextInt());
        BigInteger b0 = new BigInteger(t0, 10);
        BigInteger b1 = new BigInteger(t1, 10);
        BigInteger bn = new BigInteger(t0, 10);
        int n = in.nextInt();
        for(int i = 2; i < n; i++){
            bn = b0.add(b1.multiply(b1));
            b0 = b1;
            b1 = bn;
        }
        System.out.print(b1);
    }
}