#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b;
        cin>>a>>b;
        int num, count = 0;
        num =(int)sqrt(a);
        while(num*num <= b){
            if(num*num >= a && num*num <= b) count++;
            num++;
        }
        cout<<count<<"\n";
        
    }
    
    return 0;
}
