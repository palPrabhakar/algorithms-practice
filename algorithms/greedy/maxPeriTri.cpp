#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
    return (a > b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), desc);
    
    for (int i = 0; i <= n - 3; i++) {      
        if ((a[i+1] + a[i+2] > a[i])) {
            cout<<a[i+2]<<" "<<a[i+1]<<" "<<a[i];
            return 0;
        }
    }
    
    cout<<-1;
    
    return 0;
}
