#include<bits/stdc++.h>
using namespace std;

int fn(int n){
    if(n==0) return 0;
    return n + fn(n-1);
}

int main(){
    int n = 3;
    cout<< fn(n);
}
