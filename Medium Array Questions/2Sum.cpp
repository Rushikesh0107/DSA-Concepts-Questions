#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int nums[] = {2,7,11,15};
    int target = 9;
    int n = 4;

    unordered_map<int,int> m;
    for(int i = 0; i < n; i++){
        int a = nums[i];
        int more = target - a;
        if(m.find(more) != m.end()){
            cout<<"There is a pair"<<endl;
        }

        m[a] = i;
    }

    

    return 0;
}