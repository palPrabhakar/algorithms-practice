using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int t = Convert.ToInt32(Console.ReadLine());
        for(int a0 = 0; a0 < t; a0++){
            
            int n = Convert.ToInt32(Console.ReadLine());
            int z = n;
            string DecentNumber;
            
            while(z%3 != 0){
                z -= 5;
                if(z < 0) {
                    DecentNumber = "-1";
                    Console.WriteLine(DecentNumber);
                    break;
                }
            }
            if(z >= 0){
                string temp1 = new string('5',z);
                string temp2 = new string('3',n-z);
            
                DecentNumber = temp1+temp2;
                Console.WriteLine(DecentNumber);
            }
            

        }
        
    }
}
