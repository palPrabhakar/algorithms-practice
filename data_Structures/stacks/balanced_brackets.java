import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void balancedBracket(String s) {
        Stack<Character> st = new Stack<Character>();
        
        for(int i = 0; i < s.length(); i++) {
           // System.out.printf("%s-", s.charAt(i));
            if(s.charAt(i) == '}' || s.charAt(i) == ']' || s.charAt(i) == ')') {
               
                if(st.isEmpty()) {
                    System.out.println("NO");
                    return;
                } 
                
                char c = st.pop();
                //System.out.printf("%c %b", c , c == '(' );
                
                 if(s.charAt(i) == '}') {
                    if(c != '{') {
                         System.out.println("NO");
                        return; 
                    }
                }
                else if(s.charAt(i) == ']') {
                    if(c != '[') {
                         System.out.println("NO");
                        return; 
                    }
                }
                else if(s.charAt(i) == ')') {
                    if(c != '(') {
                       System.out.println("NO");
                        return; 
                    }
                }
            }
            else {
                st.push(s.charAt(i));
            }
        }
        if(st.isEmpty()) System.out.println("YES");
        else System.out.println("NO");
        return;    
    }
    

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            String s = in.next();
           // System.out.print(s);
           balancedBracket(s);
        }
    }
}
