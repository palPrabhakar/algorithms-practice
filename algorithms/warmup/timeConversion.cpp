#include <bits/stdc++.h>
#include <string>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    if (s.compare(s.size()-2, 2, "AM") == 0) {
        if (s.compare(0, 2, "12") == 0) {
            s.replace(0, 2, "00");
            s.erase(s.size()-2, 2);
        }
        else {
            s.erase(s.size()-2, 2);
        }
    }
    else {
        
        if (s.compare(0, 2, "12") == 0) {
            s.erase(s.size()-2, 2);
        }
        else {
            int t = stoi(s.substr(0, 2)) + 12;
            s.replace(0, 2, to_string(t));
            s.erase(s.size()-2, 2);
        }
      
        
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
