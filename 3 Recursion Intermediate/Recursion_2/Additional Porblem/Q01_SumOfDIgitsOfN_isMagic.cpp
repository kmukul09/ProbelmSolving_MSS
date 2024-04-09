/*
we have given a numebr and we are told to find that this nubmer is magical or not
A number is said to be a magic number if the sum of its digits is calculated till a single
digit recursively by adding the sum of the digits after every addition.
If the single digit comes out to be 1, then the number is a magic number.
*/
// eg: 83557
/* Sum of digits of (83557) = 28
 Sum of digits of (28) = 10
 Sum of digits of (10) = 1. 
 Single digit is 1, so it's a magic number. Return 1.
*/

// brute force approach 
/*
#include <iostream>
using namespace std;

static long ans = 0;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sum(n / 10);
}

int solve(int A)
{
    ans = sum(A);
    cout<< ans << endl;
    if(ans > 9){
        solve(ans);
    }
    if(ans==1){
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    if (solve(n))
    {
        cout << "Magical" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }
    return 0;
}
*/


// trick approach ---->> from observation 
// if mod of number with 9 is 1 then it will be magical othewise it will not be magical 

#include<iostream>
using namespace std;

int solve(int n){
    if(n%9==1){
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;

    if (solve(n))
    {
        cout << "Magical" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }
    return 0;


    return 0;
}