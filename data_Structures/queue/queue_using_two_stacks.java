import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Stack<Integer> s1 = new Stack<Integer>();
        Stack<Integer> s2 = new Stack<Integer>();
        Stack<Integer> q1 = new Stack<Integer>();
        Stack<Integer> q2 = new Stack<Integer>();
        
        Scanner in = new Scanner(System.in);
        
        int t = in.nextInt();
        int q;
        
        
       // System.out.println(t);
        
        for(int i = 0; i < t; i++) {
            q = in.nextInt();
       // System.out.println(q);
            if (q == 1) {
                s1.push(in.nextInt());
            }
            else {
                q1.push(q);
            } 
        }
        
        while(!s1.empty()) {
            s2.push(s1.pop());
        }
        
        while(!q1.empty()) {
            q2.push(q1.pop());
        }
        
        while(!q2.empty()) {
            q = q2.pop();
            if (q == 2){
                s2.pop();
            }
            else {
                System.out.println(s2.peek());
            }
        }
        
    }
}