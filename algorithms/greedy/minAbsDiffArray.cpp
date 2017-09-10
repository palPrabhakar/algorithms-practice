#include <bits/stdc++.h>
#include <algorithm>
#include <stdlib.h>
#include  <limits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // your code goes here
    
    sort(a.begin(), a.end());
    
    int min = INT_MAX; 
    int temp = INT_MAX; 
    
    for(int i = 0; i < n-1; i++) {
        temp = abs(a[i] - a[i+1]);
        min = temp < min ? temp : min;
     
        if (min == 0)  break;
    }
    
    cout << min;
    
    return 0;
}
