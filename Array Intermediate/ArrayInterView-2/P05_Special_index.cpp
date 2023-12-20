// Special Index [ Google, Direct-i, codeNation]
// Special index is an index after deleting which Sum of Even Element == Sum of odd element 
// So find the count of all special indexes

#include<bits/stdc++.h>
using namespace std;

int CountSpecialIndex(vector<int>&arr){
    int n = arr.size();

    // we need to create two arrays 
    // a prefix even and a prefix odd

    // -->> Keep in mind that before removing special index everything will be as it used to be 
    // -->> But after after special index the odd prefix will behave as even prefix  and vice-versa

    vector<int>pfe; pfe.push_back(arr[0]);
    vector<int>pfo; pfo.push_back(0);

    for(int i =1; i<n; i++){
        if(i%2 == 0){
            pfe.push_back(pfe[i-1]+arr[i]);
            pfo.push_back(pfo[i-1]);
        }else{
            pfe.push_back(pfe[i-1]);
            pfo.push_back(pfo[i-1]+arr[i]);
        }
    }

    int count = 0;
    
    for(int i =0; i<n; i++){
        int sumEven = pfe[i-1] + pfo[n-1]-pfo[i];
        int sumOdd = pfo[i-1] + pfe[n-1] - pfe[i];

        if(sumEven == sumOdd){
            count++;
        }

    }
    return count;    

}

int main (){

    vector<int>arr;
    int data;
    cin >> data;
    while( data != -1){
        arr.push_back(data);
        cin >> data;
    }

    for(auto x: arr){
        cout<< x << " ";
    }cout<< endl;

    int ans = CountSpecialIndex(arr);
    cout<< ans << endl;
    return 0;
}