#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 2, 1, 1, 1, 2, 2, 2};
    int candi = v[0];
    int count = 0;

    for(int i = 0; i < v.size(); i++){
        if(candi == v[i]){
            count++;
        }else if(candi != v[i] && count != 0){
            count--;
        }else{
            candi = v[i];
            count++;
        }
    }

    cout<< candi << endl;
}