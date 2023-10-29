// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {7,9,9,15,5};
    int n = arr.size();
    
    int minFreq = 1e5; int maxFreq = 0;
    int minElement , maxElement;
    
    unordered_map<int,int> mpp;
    
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    
    for(auto i : mpp){
        int count = i.second;
        int element = i.first;
        
        if(count > maxFreq){
            maxElement = element;
            maxFreq = count;
        }
        
        else if(count == maxFreq){
            maxElement = max(maxElement, element);
        }
        
        if(count < minFreq){
            minElement = element;
            minFreq = count;
        }
        
        else if(count == minFreq){
            minElement = min(minElement, element);
        }
        
    }
    
    vector<int> ans = {maxElement, minElement};
    
    for(auto i : ans){
        cout<<i<<" ";
    }
}