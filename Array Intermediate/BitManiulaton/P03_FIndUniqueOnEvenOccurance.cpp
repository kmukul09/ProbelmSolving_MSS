// you are given an array every element is ouccuring twice except one 
// find that unique one 

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>&arr){
    int n = arr.size();
    int ans = 0;
    for(int i =0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    vector<int>arr;
    int data;
    cin >> data;
    while(data != -1){
        arr.push_back(data);
        cin >> data;
    }

    int ans = findUnique(arr);
    cout<< ans << endl;
    return 0;
}