#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> a(n); 
    
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int i = 0; 
    int j = a[i]; 
    int k = a[i] + 4;
    int totalbuy = 0;
    
    for (i = 0; i < n; i = upper_bound(a.begin(), a.end(), a[i]+4) - a.begin()) {
        totalbuy++;
    }
    
    cout << totalbuy;
;
    
    return 0;
}