// you are given an array where every element is occuring thrice except one element 
// find that one element 

//---->> Simple way is use hashMap to find out TC:- O(n) , SC:- O(n)

//---->> Other Way is Using BitManipulaton 
// Let's see how 


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
    
    // st1 : Traverse every bit in binary representation of a numebr considering it 32bits architecture
    for(int i =0; i<32; i++){

        // st2: now create a sum variable that will store the SetBit at Ith bit of the number
        int sum = 0;

        // st3: Traverse the whole array 
        for(int j=0; j<n; j++){

            // st3: check the Ith bit of every number wether it is set or unset 
            // if set add to sum otherwise move on
            if(checkBit(arr[j], i)){
                sum++;
            }

        }

        // st4: frequency of every element is 3 so mod the sum by 3. Now if sum mod 3 is equal to 1 then 
        // add the bitvalue (i) to ans, Meaning (1<<i) will be the value for ith bit in a number 
        if(sum % 3 == 1){
            ans = ans + (1<<i);
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