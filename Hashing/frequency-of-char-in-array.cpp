#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    //input char array
    
    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //preprocessing

    int hash[26]={0};
    for(int i = 0; i < n; i++){
        hash[arr[i]-'a'] += 1;
    }

    for(int i = 0; i < 26; i++){
        if(hash[i] > 0){
            cout<<char(i+'a')<<" "<<hash[i]<<endl;
        }
    }

}