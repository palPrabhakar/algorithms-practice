#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <stdlib.h>
//#include  <limits>

using namespace std;

bool sortDesc (int i, int j) { 
    return (i > j);
}

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++) {
       cin >> calories[calories_i];
    }
    
    // your code goes here
    sort(calories.begin(), calories.end(), sortDesc);
    
    long miles = 0;
    long l = 1;
    
    for(int i = 0; i < n; i++) {
       //cout<<calories[i]<<endl; 
        
       miles = miles + (l<<i)*calories[i];
    }
    
    cout << miles;
    
    return 0;
}
