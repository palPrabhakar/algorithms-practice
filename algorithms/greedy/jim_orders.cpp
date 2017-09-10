#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct order {
    int t;
    int v;
    int j;
};

bool sortOrder(order a, order b) {
    return a.v < b.v;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    order v[n];
 
    for (int i = 0; i < n; i++) {
        cin >> v[i].t >> v[i].v;
        v[i].v += v[i].t;
        v[i].j =  i + 1;
    }
    
    stable_sort(v, v + n, sortOrder);
        
    for (int  i = 0; i < n; i++) {
        cout << v[i].j << " "; 
    }
        
    return 0;
}
