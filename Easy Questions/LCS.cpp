#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0, right = 0;
    int maxlen = 0;
    long long sum = arr[0];
    int k = 3;

    while (right < n)   
    {
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k) maxlen = max(maxlen, right - left + 1);
        right++;
        if(right < n) sum += arr[right];
    }

    cout<<maxlen<<endl;
    
}