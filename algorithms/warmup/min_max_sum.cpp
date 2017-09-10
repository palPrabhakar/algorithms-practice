#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    
    sort(arr.begin(), arr.end());
    
    long a = 0, b = 0;
    for(int i = 0; i < 4; i++) {
        a += arr[i];
        b += arr[i+1];
    }
    
    cout<<a<<" "<<b;
    
    return 0;
}