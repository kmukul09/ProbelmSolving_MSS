// You are given a matrix and you are asked to return a transpose of this matrix 
// here we are solving only for square matrix 
// -->> because for others we will need extra spaces 

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>Transpose(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();

    vector<vector<int>>ans;
    ans  = arr;
    for(int i =0; i<row; i++){
        for(int j = i; j<col; j++){
            swap(ans[i][j], ans[j][i]);
        }
    }
    return ans;
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

    vector<vector<int>>ans = Transpose(arr);

    for(auto itr:ans){
        for(auto x:itr){
            cout<< x << " ";
        }
        cout<< endl;
    }
}