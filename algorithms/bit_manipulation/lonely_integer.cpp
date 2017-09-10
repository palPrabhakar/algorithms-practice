#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector <int> a) {
    // Complete this function
    
    int num = 0;
    
    for (int i = 0; i < a.size(); i++) {
        num = num^a[i];
    }
    
    return num;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = lonelyinteger(a);
    cout << result << endl;
    return 0;
}
