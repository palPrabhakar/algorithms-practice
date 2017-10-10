import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
      
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */  
        Stack<Integer> stack = new Stack<Integer>();
        Stack<Integer> max = new Stack<Integer>();
        max.push(0);
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 0; i <= n; i++) {
            int q = in.nextInt();
            if(q == 1){
                stack.push(in.nextInt());
                if(max.peek() <= stack.peek()) max.push(stack.peek());
            }
            else if(q == 2){
                if(stack.peek() == max.peek()) {
                    max.pop();
                }
                stack.pop();
            }
            else {
                System.out.println( max.peek());    
            }
        }
        
    }
}