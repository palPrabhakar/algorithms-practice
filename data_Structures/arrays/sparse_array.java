import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        HashMap<String, Integer> arr = new HashMap();
        String str;
        for(int i = 0; i < n; i++) {
            str = in.next();
            if(arr.containsKey(str)){
                arr.put(str, arr.get(str) + 1);
            }
            else {
                arr.put(str, 1);
            }
        }
        
        int q = in.nextInt();
        for(int i = 0; i < q; i++) {
            str = in.next();
            if(arr.containsKey(str)) System.out.printf("%d \n", arr.get(str));
            else System.out.printf("%d\n", 0);
        }
    }
}