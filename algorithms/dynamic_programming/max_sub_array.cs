using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        int t = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < t; i++){
            int n = Convert.ToInt32(Console.ReadLine());
            int[] num = new int[n];
            string sNum = Console.ReadLine();
            string[] snum = sNum.Split(' ');
            for(int j = 0; j < n; j++) {
                num[j] = Convert.ToInt32(snum[j]);
            }
            ConSum(num);
        }
    }
    
    public static void ConSum(int[] num){
			int size = num.Length;
			int conSum = 0, temp = 0;
            int nConSum = 0;

			for (int i = 0; i < size; i++) {
				temp = (temp + num [i] > 0) ? temp + num [i] : 0;
				conSum = (temp > conSum) ? temp : conSum;
                nConSum += num[i] > 0 ? num[i] : 0;
			}
        if(conSum == 0){
            conSum = num[0];
            for(int i = 1; i < size; i++){
                conSum = num[i] > conSum ? num[i] : conSum;   
            }
            nConSum = conSum;
        }
        
        Console.WriteLine("{0} {1}",conSum, nConSum);

		}
}