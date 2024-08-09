#include<bits/stdc++.h>
using namespace std;

int main(){
    int row = 5;
    int col = 6;
    int rStart = 1;
    int cStart = 4;

    vector<vector<int>> v;
    int diri = 0;
    int dirj = 1;
    int twice = 2;
    int moves = 1;
    int next_moves = 2;

    while(v.size() < row * col){
        if( i >= 0 && i < row && j >= 0 && j < col){
            v.push_back({i, j});
        }

        i += diri;
        j += dirj;
        moves -= 1;
        if(moves == 0){
            int temp = diri;
            diri = dirj;
            dirj = -temp;
            twice -= 1;
            if(twice == 0){
                twice == 2;
                moves = next_moves;
                next_moves += 1;
            }else{
                moves = next_moves - 1;
            }
        }
    }

    return v;    
}