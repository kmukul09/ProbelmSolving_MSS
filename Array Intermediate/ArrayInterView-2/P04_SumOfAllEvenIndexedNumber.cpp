// You are given an array and Q queries, for each query you are given 2 index s and e. For every query return 
// The Sum of all the even indexed elements in the range s to e

#include<bits/stdc++.h>
using namespace std;

int SumOfAllEvenIndexedElement( vector<int>&arr, vector<vector<int>>&query){

    // cretae a prefix array 
    int n = arr.size();
    vector<int>prefix;
    prefix.push_back(arr[0]);
    for(int i =1; i<n; i++){
        if(i%2 == 0){
            prefix.push_back(prefix[i-1] + arr[i] ); 
        }else{
            prefix.push_back(prefix[i-1]);
        }
    }

    int ans = 0;

    for(int i =0; i<query.size(); i++){
        int s = query[i][0];
        int e = query[i][1];
        
        if(s == 0){
            ans = prefix[e];
        }else{
            ans = ans + prefix[e] - prefix[s-1];
        }
    }

    return ans;
}

int main(){

    cout<< "Enter the elements of Vector" << endl;
    vector<int>arr;
    int data;
    cin >> data;
    while( data != -1){
        arr.push_back(data);
        cin >> data;
    }

    // queries
    int nq ;
    cout<< "Enter the numebr of query"<< endl;
    cin >> nq;
    vector<vector<int>>query;
    for(int i =1;i<=nq; i++){
        int s, e;
        cin >> s >> e;
        query.push_back({s, e});
    }

    for(auto x : arr){
        cout<< x << " ";
    }cout<< endl;

    int ans = SumOfAllEvenIndexedElement(arr, query);
    cout<< ans <<endl;
    return 0;
}