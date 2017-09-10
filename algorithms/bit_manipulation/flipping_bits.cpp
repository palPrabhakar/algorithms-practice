#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; 
    cin >> n;
    unsigned int num; 
    unsigned int max = 	WINT_MAX;
    
    for (int i = 0; i < n; i ++) {
        cin >> num;
        cout << max - num << endl;
    }
    
    return 0;
}
