#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {16,17,4,3,5,2};
    int n = sizeof(a)/sizeof(a[0]);
    int curLeader = a[n - 1];

    cout<<curLeader<<" ";


    for(int i = n-2; i >= 0; i--){
        if(a[i] < curLeader) continue;
        else curLeader = a[i];
        cout<<curLeader<<" ";
    }
}