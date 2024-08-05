#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v = {"yellowShirt", "redHat", "bluePants", "blackShirt", "redHat", "pinkHat", "blackShirt", "yellowShirt", "greenPants", "greenPants", "greenPants"};
    
    sort(v.begin(), v.end());
    unordered_map<string, int> mp;
    for(int i = 0; i < v.size(); i++){
        mp[v[i]]++;
    }

    vector<pair<string, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), [](const pair<string, int> &a, const pair<string, int> &b){
        if(a.second != b.second) return a.second > b.second;
        
    });

    for(auto i : vec){
        cout<< i.first << "->" << i.second<<endl;
    }
    
}