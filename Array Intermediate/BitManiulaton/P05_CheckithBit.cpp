// Given a Numebr and a position i check if the ith bit is set or not 

#include<iostream>
#include<vector>
using namespace std;

bool checkBit(int n, int i){
    if( (1<<i)&n ){
       return true;
    }
    return false;
}

int main(){
    
    int data, i;
    cin >> data >> i;

    cout<< data << i << endl;

    if(checkBit(data, i)){
        cout<< "Set" <<endl;
    }else{
        cout<< "Unset" << endl;
    }
    return 0;
}