// Given an array with N elements 
// calculate triplets i,j,k such that i<j<k and arr[i] < arr[j] < arr[k]
// where i, j, k are indices 

// Brute force SOlution is O(n^3)

// let's work on Efficient algo

#include<iostream>
#include<vector>
using namespace std;

int CountTriplets(vector<int>&arr){
    int n = arr.size();

    // so we will traverse each element and at a time for that element 
    // we will look for elements samaller and larger than 
    // Basically we call it Contributions method 
    

    int ans = 0;
    for(int i =0; i<n; i++){

        int left =0;
        for(int j = i-1; j>=0; j--){
            if(arr[j] < arr[i]){
                left++;
            }
        }

        int right = 0;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[i]){
                right++;
            }
        }

        ans = ans + (left*right);
    }
    return ans ;
}

int main(){

    vector<int>arr;
    int data;
    cin >> data;
    while(data != -1){
        arr.push_back(data);
        cin >> data;
    }

    for(auto x: arr){
        cout<< x << " ";
    }cout<<endl;

    int ans = CountTriplets(arr);
    cout<< ans << endl;

    return 0;
}
