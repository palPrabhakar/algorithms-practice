#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    long long sum;
    cin>>n;
    int a[n]={};
    sum=0;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
