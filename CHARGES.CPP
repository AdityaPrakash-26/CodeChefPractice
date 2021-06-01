#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int len = s.length();
        int dist = 0;
        for(int i = 0; i<len-1; i++){
            if(s[i]==s[i+1]){
                dist+=2;
            } else {
                dist++;
            }
        }
        int q = k;
        while(q--){
            int pos;
            cin>>pos;
            pos--;
            if(s[pos]=='0'){
                s[pos]='1';
            } else {
                s[pos]='0';
            }

            if (pos == 0){
                if (pos + 1 < n){
                    if (s[pos] == s[pos + 1])
                        dist++;
                    else
                        dist--;
                }
            } else if (pos == n - 1) {
                if (pos - 1 >= 0) {
                    if (s[pos] == s[pos - 1])
                        dist++;
                    else {
                        dist--;
                    }
                }
            } else {
                if (s[pos - 1] == s[pos + 1]){
                    if (s[pos] == s[pos - 1])
                        dist += 2;
                    else
                        dist -= 2;
                }
            }
            cout << dist << endl;
        }
    }
}