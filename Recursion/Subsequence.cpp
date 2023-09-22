#include<bits/stdc++.h>
using namespace std;

void fun(int index, vector<int> &ds,int arr[], int n){
    if(index == n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0) cout<<"{}";
        cout<<endl;
        return;
        
    }

    //Choose to take the next number of the array
    ds.push_back(arr[index]);
    fun(index + 1, ds, arr, n);
    ds.pop_back();

    //Choose not to take the next number in the array
    fun(index + 1, ds, arr, n); 
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    fun(0,ds,arr, n);
}