#include<bits/stdc++.h>
using namespace std;

int main(){

    //solved using hash map
    
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

    //here the time complexity is O(nlogn) for ordered map 
    //And O(n) for unordered map in best and average case in worst case it is O(n2)
    //space complexity is O(n) for both


    //solved using two piointer approach

    int i = 0, j = n -1;

    while(i < j){
        if(nums[i] + nums[j] == target){
            cout<<"There is a pair"<<endl;  
        }

        if(nums[i] + nums[j] > target){
            j--;
        }
        else{
            i++;
        }
    }

    //here the time complexity is O(n) + O(nlogn)
    //space complexity is O(1)

    return 0;
}