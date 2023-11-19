#include<bits/stdc++.h>
using namespace std;

int  main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,13,14,15};
    int n = sizeof(a)/sizeof(a[0]);

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    int total = (n + 1) * (n + 2) / 2;

    cout<<total - sum<<endl;
}