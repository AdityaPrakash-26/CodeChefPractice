#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;

        int xDist = abs(c-a);
        int yDist = abs(d-b);

        if(xDist + yDist > k){
            cout<<"NO\n";
        }

        if((k - xDist + yDist)%2==0) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}