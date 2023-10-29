#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    map<int,int> mpp;
    //input array

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        mpp[arr[i]] += 1;
    }

    //first TYPE for iterating map
    for(auto it = mpp.begin(); it != mpp.end(); it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }

    //Second TYPE for iterationg map

    for(auto i : mpp){
        cout << i.first << " -> " << i.second <<endl;
    }
}

//TIME COMPLEXITY : O(logn)
//For storing and fetching generally the time complexity is O(1) in average and best case.
//But in the worst case the TIME COMPLEXITY becomes O(N).