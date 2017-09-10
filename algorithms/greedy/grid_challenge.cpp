#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

bool sorted(char* a, int n) {
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) { return false;}
    }
    
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t; 
    int n; 
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> n;
        char arr[n][n];
        
        for (int k = 0; k < n; k++) {
            string temp;
            cin >> temp;
            sort(temp.begin(), temp.end());
            for (int j = 0; j < n; j++) {
              arr[j][k] = temp[j];
            }
        }
        
        int flag = 1;
        for (int k = 0; k < n; k++) {
            if (!sorted(arr[k], n)) {
                flag = 0;
                break;
            }
        }
        
        if (flag == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
        
    }
    
    return 0;
}
