#include <bits/stdc++.h>
#include <string>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    
    string ss = string();
    int pos = 1; 
    int len = 0;
    int t = 0;
    int flag = 1;
    
    while(flag == 1) {
        flag = 0;
        t = 0;
        while(t < s.size()){
            if (s[t] == s[t+1]) {
                t = t+2;
                flag = 1;
            }
            else {
                ss.push_back(s[t]);
                t++;
            }
       }
       if (flag == 1) {
            s = ss;
            ss = "";
        }
    }
    
    
    
    if(ss == "") {
        return "Empty String";
    }
    else {
        return ss;
    }
    
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
