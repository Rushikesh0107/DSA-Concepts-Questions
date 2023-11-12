#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {3,1,5,4,3,2,0,0};
    int n = sizeof(a)/sizeof(a[0]);
    int ind = -1;

    for(int i = n-2; i >= 0; i--){
        if(a[i] < a[i+1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){
        reverse(a, a + n);
        for(int i = 0; i < n; i++){
            cout<<a[i]<<" ";
        }
    }

    for(int i = n - 1; i > ind; i--){
        if(a[i] > a[ind]){
            swap(a[i], a[ind]);
            break;
        }
    }

    reverse(a + ind + 1, a + n);

    for(auto i : a){
        cout<<i<<" ";
    }
}