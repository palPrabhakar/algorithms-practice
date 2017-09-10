#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int maximumToys(vector <int> prices, int k) {
    // Complete this function
    sort(prices.begin(), prices.end());
    
    int tp = prices[0]; 
    int c = 0;
    
    while (tp < k) {
        tp += prices[++c];
    }
    
    return c;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}
