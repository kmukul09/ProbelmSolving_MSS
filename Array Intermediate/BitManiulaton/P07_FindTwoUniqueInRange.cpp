// You are given an array in which Elements are present from 1 to n+2 but two numbers are missing  
// find those two unique element

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

pair<int, int> findUnique(vector<int>&arr){
    int n = arr.size();
    int xr = 0;
    
    // st1 : Xor all the element to get the xor of two Unique element
    int j =1, i=0;
    while(j<=n+2){
        if(i<n){
            xr = xr^arr[i]^j;
        }else{
            xr = xr^j;
        }
        j++; i++;
    } 

    // st2: traverse the binary bits of xr to find any SetBit once found a SetBit stop and store the position of SetBit
    int pos = -1;
    for(int i =0; i<32; i++){
        if(checkBit(xr, i)){
            pos = i;
            break;
        }
    }

    // st3: Now we will segregate the elements in two groups 
    // one gropup with ith Bit (pos) is set and other where it is Unset
    int grp1 = 0, grp2 = 0;
    for(int i=0; i<n; i++){
        if(checkBit(arr[i], pos)){
            grp1 = grp1^arr[i];
        }else{
            grp2 = grp2^arr[i];
        }
    }

    for(int i=1; i<=n+2; i++){
        if(checkBit(i, pos)){
            grp1 = grp1^i;
        }else{
            grp2 = grp2^i;
        }
    }
    return {grp1, grp2};
}

int main(){
    vector<int>arr;
    int data;
    cin >> data;
    while(data != -1){
        arr.push_back(data);
        cin >> data;
    }

    pair<int, int>pp = findUnique(arr);
    cout<< "First :"<< pp.first<< " " << "Second :" << pp.second << endl;
    return 0;
}