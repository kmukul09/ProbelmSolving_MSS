// we have x and y given two numbers 
// All we have to do is set x bits and unset y bits

// set bit is '1' and unset bit is '0'

#include<bits/stdc++.h>
using namespace std;

int find(int x, int y)
{
    // first set x bit then lift shift it by y times
    // to set x bits we do ((1<<x)-1) bcz we have 0th bit so count will decrease 
    return ((1<<x)-1)<<y;
}
int main(){
    int x, y;
    cin >> x >> y;

    int ans = find(x,y);
    cout<< ans << endl;
    return 0;
}