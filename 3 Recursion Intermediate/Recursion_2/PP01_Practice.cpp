#include<iostream>
#include<vector>
using namespace std;

int FindNumber(vector<int>&arr){
    int n = arr.size();
    int ans = arr[0];
    for(int i =1; i<n; i++){
        ans = ans*10 + arr[i];
    }
    return ans;
}
int main()
{
    vector<int>arr;
    int data;
    cin >> data;
    while( data != -1){
        arr.push_back(data);
        cin >> data;
    }
    
    int ans = FindNumber(arr);
    cout<< ans << endl;
    return 0;
}