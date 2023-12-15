// we have an array and we need to print all the SubArray

// -->> we need three pointers

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>AllSubarrays(vector<int>&arr){
    vector<vector<int>>ans;
    int n = arr.size();
    for(int i =0; i<n; i++){
        for(int j = i; j<n; j++){
            vector<int>ds;
            for(int k = i; k<=j; k++){
                ds.push_back(arr[k]);
            }
            ans.push_back(ds);
        }
    }
    return ans;
}

int main(){
    vector<int>arr;
    int data;
    cin >> data;
    while(data != -1){
        arr.push_back(data);
        cin>> data;
    }

    for(auto x:arr){
        cout<< x <<" ";
    }
    cout<< endl;

    vector<vector<int>> subarray = AllSubarrays(arr);

    for(auto x:subarray){
        for(auto y:x){
            cout<< y <<" ";
        }
        cout<< endl;
    }

    return 0;
}