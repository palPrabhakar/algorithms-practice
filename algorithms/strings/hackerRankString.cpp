#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string h = "hackerrank";
        int k = 0;
        // your code goes here
        for(int i = 0; i<s.length(); i++) {
            if (s[i] == h[k]) k++;
        }
        
        if (k == h.length()) cout << "YES\n" ;
        else cout << "NO\n";
    }
    return 0;
}
