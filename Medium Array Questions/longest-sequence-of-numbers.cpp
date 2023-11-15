#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = 12;

    int longest = 1;
    unordered_set<int> s;
    int cnt = 0;

    for(int  i = 0; i < n; i++){
        s.insert(a[i]);
    }

    for(auto i : s){
        if(s.find(i -1) == s.end()){
            cnt  = cnt + 1; //this is the starting point of the sequence
            int x = i;

            while(s.find(x + 1) != s.end()){
                cnt = cnt + 1;
                x = x + 1;
            }

            longest = max(longest, cnt);
        }
    }

    cout<<longest;
}