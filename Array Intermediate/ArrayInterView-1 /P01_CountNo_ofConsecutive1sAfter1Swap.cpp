// we have a bianry array (0,1) and we are allowed to do one swap only b/w 0 and 1
// SO now find the maximum number of consecutive 1s

#include <iostream>
#include <vector>
using namespace std;

int findMax1s(vector<int>&arr){
    // edge case : if all the elements are 1
    int n = arr.size();

    int totalcount1 = 0;
    for(int i =0; i<n ; i++){
        if(arr[i] == 1){
            totalcount1++;
        }
    } 

    if(totalcount1 == n){
        return n;
    }

    int ans = -1;

    // now we will traverse the array and will look for 0 
    // onece we find a zero then we count lectfCount_of 1 and rightCount_of 1 
    // adding both and comparing with totalcount1 if gets equal then we return ans = max(ans, left + right)
    // else we return ans = max( ans , left+right+1)

    // so let's begin
    for(int i =0; i<n; i++){

        if(arr[i] == 0){

            int left = 0;
            for(int j = i-1; j>=0; j--){
                if(arr[j] == 1){          //--->>>> make sure using correct itrator like here j will be used not i
                    left++;
                }else{
                    break;
                }
            }

            int right = 0;
            for(int j = i+1; j<n; j++){
                if(arr[j] == 1){
                    right++;
                }else{
                    break;
                }
            }

            if( left + right  == totalcount1){
                ans = max(ans , left+ right);
            }else{
                ans = max(ans , left+right+1);
            }

        }
    }

    return ans;

}

int main(){
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

    int LongestConsecutive1s = findMax1s(arr);
    cout<< "Longest Consecutive 1's are : " << LongestConsecutive1s<< endl;


    return 0;
}
