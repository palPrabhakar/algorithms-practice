#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[200];
    int temp, pos;
    temp = 0;
    pos = 1;
    a[0] = 1;
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < pos; j++){
            a[j] = a[j]*i + temp;
            temp = a[j]/10;
            a[j] = a[j]%10;
        }
        while(temp>0){
            a[pos] = temp%10;
            temp = temp/10;
            pos++;
        }
    }
    
    for(int i = pos-1; i >= 0; i--){
        cout<<a[i];
    }
    
    return 0;
}
