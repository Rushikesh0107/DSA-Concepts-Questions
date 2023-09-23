#include<bits/stdc++.h>
using namespace std;

void func(int index, int sum, vector<int> &ds,int arr[], int k, int n){
    if(index == n){
        if(sum == k){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[index]);
    sum += arr[index];

    func(index + 1,sum, ds, arr, k, n);

    sum -= arr[index];
    ds.pop_back();

    func(index + 1,sum, ds, arr, k, n);

}


int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int k = 2;
    vector<int> ds;
    func(0, 0, ds, arr, k, n);   
}