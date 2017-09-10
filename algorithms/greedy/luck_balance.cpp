#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    vector <int> imp; 
    vector <int> notImp;
    int val; 
    int flag; 
    long luck = 0;
    long impluck = 0;
    long notImpLuck = 0;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> val >> flag;
        
        if (flag == 1) {
            imp.push_back(val);
            impluck += val;
        }
        else {
            notImp.push_back(val);
            notImpLuck += val;
        }
        
        
    }
    
    if (k == imp.size() + notImp.size()) {
         // Do Nothing 
    }
    else if (k == 0) {
       
        impluck = -impluck;
       // notImpLuck = -notImpLuck;
    }
    else if (imp.size() > k) {
        sort(imp.begin(), imp.end());

        for (int j = 0; j < imp.size() - k; j++) {
           // cout <<impluck<<endl<<imp[j]<<endl;
            impluck -= 2*imp[j];
           // cout <<impluck<<endl;
        }
    }
    else {
/*        
        sort(notImp.begin(), notImp.end());
        
         for (int j = 0; j < k - imp.size(); j++) {
           // cout <<impluck<<endl<<imp[j]<<endl;
            notImpLuck -= 2*notImp[j];
           // cout <<impluck<<endl;
        }
        */
      
    }
        
    luck = notImpLuck + impluck;
    
    cout << luck;
    
    return 0;
}
