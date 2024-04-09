
// find the power of any number a rise to n recursively
// ans try to optimize it;

// Brute force :: a lot of funciton calls;

/* // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;

int pw(int n, int p)
{
    if (n == 0)
    {             //----> Here to check edge case if base is 0 and exponent is something then
        return 0; //----> it should return 0;
    }
    if (p == 0)
    {
        return 1; // Here is the base case;
    }
    return n * pw(n, p - 1); // here is the recursive function call;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << pw(n, p) << endl;
    return 0;
}
*/

// now we try to reduce the function calls
/* //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;

int pw(int a, int n)
{
    if (a == 0)
    {             //----> Here to check edge case if base is 0 and exponent is something then
        return 0; //----> it should return 0;
    }
    if (n == 0)
    {
        return 1; // Here is the base case;
    }

    if(n&1){
        return a * pw(a, n/2) * pw(a, n/2);    // but we can observe here it has more function
    }else{                                     // calls than brute force so surely not good
        return pw(a, n/2)*pw(a,n/2);
    }
}
int main()
{
    int a, n;
    cin >> a >> n;
    cout << pw(a, n) << endl;
    return 0;
}
*/

// ayee bhai optimal bola tha ye kya karwa dia

// we need optimal
// so lets actually try to reduce the function calls

/*  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;

static int temp = 0;

int pw(int a, int n)
{
    if (a == 0)
    {             //----> Here to check edge case if base is 0 and exponent is something then
        return 0; //----> it should return 0;
    }
    if (n == 0)
    {
        return 1; // Here is the base case;
    }

    // we can see that 2^n is equal to { 2^n/2 * 2^n/2 }
    // so using this we can say that if we find the power of 2^n/2 and store it
    // in some global variable say (temp)  then we can (temp * temp) it to get the ans

    // logic well be sama as above code we ahve just changes the no of calls
    temp = pw(a, n / 2); // here we are reducing the calls to log(n) everytime it recudes by half

    if (n & 1)
    {
        return a * temp * temp;
    }
    else
    {
        return temp * temp;
    }
}
int main()
{
    int a, n;
    cin >> a >> n;
    cout << pw(a, n) << endl;
    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int a = -28;
    int b = 5;
    cout<< a%b<<endl;

    return 0;
}