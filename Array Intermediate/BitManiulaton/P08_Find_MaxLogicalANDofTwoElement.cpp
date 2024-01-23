// You are given an array and told to find the maximum value of logical AND ot two numebrs 
// max(arr[i] & arr[j])

// We can solve it using HashMap but tc: O(n) and SC: o(n)

// Other way is we solve it using BitManipulation in o(n)

#include<iostream>
#include<vector>
using namespace std;

bool checkBit(int n, int i){
    if( (1<<i)&n ){
        return true;
    }
    return false;
}

int findUnique(vector<int>&arr){
    int n = arr.size();
    
    int ans = 0;
    for(int i =30; i>=0; i--){
        int sum = 0;
        for(int j =0; j<n; j++){
            if(checkBit(arr[j], i)){
                sum++;
            }
        }

        if(sum > 2){
            ans = ans^(1<<i);

            for(int j=0; j<n; j++){
                if(checkBit(arr[j], i)){
                    arr[j] = 0;
                }
            }
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
        cin >> data;
    }

    int ans = findUnique(arr);
    cout<< ans << endl;
    return 0;
}