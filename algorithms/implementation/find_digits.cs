using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int t = Convert.ToInt32(Console.ReadLine());
        for(int a0 = 0; a0 < t; a0++){
            int n = Convert.ToInt32(Console.ReadLine());
            string str = Convert.ToString(n);
            int size = str.Count();
            //Console.WriteLine(size);
            int[] num = new int[size];
            
            int count = 0;
            int temp = n;
            for(int i = 0; i<=size -1 ; i++){
                num[i] = (int)(temp/Math.Pow(10,size-1-i));
                
               // Console.WriteLine(num[i]);
                if(num[i] != 0){
                 if(n%num[i] == 0) count++;      
                }
                temp = temp - (int)(num[i]*Math.Pow(10,size-1-i));
               // Console.WriteLine(n);
            }
            Console.WriteLine(count);
            
        }
    }
}
