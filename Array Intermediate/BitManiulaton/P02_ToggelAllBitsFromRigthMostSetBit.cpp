// You are given a number and told to toggle all bit after the rightmost set bit 

#include<bits/stdc++.h>
using namespace std;

int pos(int n){
    int ind = 0;
    int i =0;
    while(n>0){
        if(n&1){
            ind = i;
            break;
        }
        i++;
        n = n>>1;
    }
    return ind;
}

int find( int n){

    // find the position of rightmost setbit;
    int x = pos(n);
    return ((1<<(x+1)) - 1)^n;
}

int main(){
    int n;
    cin >> n;

    int ans = find(n);
    cout<< ans << endl;
    return 0;
}
