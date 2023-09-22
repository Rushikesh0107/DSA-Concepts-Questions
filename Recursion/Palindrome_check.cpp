#include<bits/stdc++.h>
using namespace std;

bool f(int i, string &s, int n){
    if(i >= n/2) return true;

    if(s[i] != s[n-i-1]) return false;
    f(i+1, s, n);
}

int main(){
    string s = "amda";
    int n = s.length();
    bool answer = f(0,s, n);

    if(answer) cout<<"The String is Palindrom";
    else cout<<"The string is not Palindrome";
}