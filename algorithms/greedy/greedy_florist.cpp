#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool sortDesc(int a, int b) {
    return (a > b);
}

int getMinimumCost(int n, int k, vector < int > c){
    // Complete this function
    sort(c.begin(), c.end(), sortDesc);
    int cost = 0;
    for(int i = 0; i < n; i++) {
        cost += (i/k + 1)*c[i];
    }
    return cost;        
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int minimumCost = getMinimumCost(n, k, c);
    cout << minimumCost << endl;
    return 0;
}
