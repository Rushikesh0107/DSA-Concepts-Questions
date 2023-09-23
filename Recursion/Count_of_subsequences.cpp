#include<bits/stdc++.h>
using namespace std;

int func(int index, int sum,int arr[], int k, int n, int counter){

    if(sum > k) return 0;
    if(index == n){
        if(sum == k) return 1;
        else return 0;
    }


    sum += arr[index];

    int l = func(index + 1,sum,  arr, k, n, counter);

    sum -= arr[index];

    int r = func(index + 1,sum, arr, k, n, counter);

    return l + r;

}


int main(){
    int arr[] = {1,2,1,1};
    int n = 4;
    int k = 2;
    cout << func(0, 0, arr, k, n, 0);   
}