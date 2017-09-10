#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,sum1=0,sum2=0;
    cin>>n;
    int A[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    
    for(int k=0;k<n;k++){
        sum1+=A[k][k];
        sum2+=A[n-1-k][k];            
    }
    
    cout<<abs(sum1-sum2);
    
    return 0;
}
