#include<bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin>>w;
    if(w < 3) cout<<"NO";
    else {
        w%2 == 0 ? cout<<"YES" : cout<<"NO";
    }

    return 0;
}