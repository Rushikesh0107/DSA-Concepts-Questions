#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> st;

    for(char i : s){
        st.insert(i);
    }

    if(st.size() % 2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

    return 0;
    
}