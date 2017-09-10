#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int a[100] = {0};
    int x;
    cin >> n; 
    for(int i = 0; i < n; i++) {
       cin >> x;
        ++a[x];
    }
    
     for(int i = 0; i < 100; i++) {
       cout<<a[i]<<" ";
    }
    return 0;
}
