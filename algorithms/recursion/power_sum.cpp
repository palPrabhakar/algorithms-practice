#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int powersum(int n, int k, int v) {
    int x = n - pow(v, k);
    if (x < 0) return 0;
    else if (x == 0) return 1;
    else return(powersum(n, k, v+1) + powersum(x, k, v+1));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int k;
    cin >> n ;
    cin>> k; 
    cout << powersum(n, k, 1);
    return 0;
}
