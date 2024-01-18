// print all the diagonal elements 
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>Diagonal(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();

    vector<vector<int>> res;

    for(int j = 0; j<col; j++){
        vector<int>ds;
        int r = 0, c = j;
        while(r<row && c >=0){
            ds.push_back(arr[r][c]);
            r++; c--;
        }
        // to make it look better we will put zero to all the unnecessary places so we will use resize
        ds.resize(row,0);
        res.push_back(ds);
    }
    // now last few diagonals 
    for(int i =1; i<row; i++){
        vector<int>ds;
        int r = i, c = col-1;
        while(r<row && c >= 0){
            ds.push_back(arr[r][c]);
            r++; c--;
        }
        ds.resize(row,0);
        res.push_back(ds);
    }
    return res;
}

int main(){
    vector<vector<int>>arr;
    int row ,col;
    cin >> row >> col;
    
    for(int i =0; i<row; i++){
        vector<int>ds;
        for(int j =0; j<col; j++){
            int a; cin>> a;
            ds.push_back(a);
        }
        arr.push_back(ds);
    }

    for(auto itr:arr){
        for(auto x:itr){
            cout<< x << " ";
        }
        cout<< endl;
    }

    vector<vector<int>>ans = Diagonal(arr);

    for(auto itr:ans){
        for(auto x:itr){
            cout<< x << " ";
        }
        cout<< endl;
    }
}