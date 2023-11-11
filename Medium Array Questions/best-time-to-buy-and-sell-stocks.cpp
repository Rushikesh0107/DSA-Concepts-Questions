#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mini = arr[0];
    int maxProfit = 0;

    for(int i = 1;i < n; i++){
        int cost = arr[i] - mini;
        maxProfit = max(cost, maxProfit);
        mini = min(mini, arr[i]);
    }

    cout<<maxProfit;
}