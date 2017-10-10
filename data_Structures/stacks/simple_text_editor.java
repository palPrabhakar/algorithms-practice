import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        Stack<Integer> ops = new Stack<Integer>();
        Stack<String> opd = new Stack<String>();
        StringBuilder sb = new StringBuilder();
        String str = "";
        int t = in.nextInt();
        int n;
        int k;
        for(int i = 0; i < t; i++) {
            n = in.nextInt();
            switch(n) {
                case 1: 
                    str = in.next();
                    sb.append(str);
                    ops.push(n);
                    opd.push(str);
                    break;
                case 2:
                    k = in.nextInt();
                    ops.push(n);
                    opd.push(sb.substring(sb.length()-k, sb.length()));
                    sb.delete(sb.length()-k, sb.length());
                    break;
                case 3:
                    k = in.nextInt();
                    System.out.println(sb.charAt(k-1));
                    break;
                case 4: 
                    k = ops.pop();
                    if(k == 1) {
                        str = opd.pop();
                        sb.delete(sb.length()-str.length(), sb.length());
                    }
                    else {
                        str = opd.pop();
                        sb.append(str);
                    }
                    break;
                default :
                    break;
            }
        }
    }
}