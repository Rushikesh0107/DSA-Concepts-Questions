#include<bits/stdc++.h>
using namespace std;

//find maximum profit

int findMP(vector<int> prices) {
    int minP = INT_MAX;
    int MP = 0;
    
    for(int i = 0; i < prices.size(); i++){
        minP = min(prices[i], minP);
        int Prf = prices[i] - minP;
        MP = max(MP, Prf);
    }
    
    return MP;
}

int main () {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int MP = findMP(prices);
    cout<<"The max profit is "<<MP<<endl;
}