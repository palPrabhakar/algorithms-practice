#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, k, unfairness = INT_MAX;
    cin >> n >> k;
    vector<int> list(n);
    for (int i=0; i<n; i++)
        cin >> list[i];
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    sort(list.begin(), list.end());
    for(int i = 0; i <= n - k; i++) {
        unfairness = list[i + k - 1] - list[i] < unfairness ? list[i + k - 1] - list[i] : unfairness;
    }
    cout << unfairness << "\n";
    return 0;
}
