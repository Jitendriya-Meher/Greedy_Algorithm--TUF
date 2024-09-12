#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {

    int maxInd = 0;
    int n = nums.size();

    for( int i=0; i<n; i++ ){
        if( i > maxInd){
            return false;
        }
        maxInd = max( maxInd, i + nums[i]);
    }

    return true;
        
}

int main(){

    vector<int> nums {2,3,1,1,4};
    cout <<"can reach :"<< canJump(nums) << endl;

    nums = {3,2,1,0,4};
    cout <<"can reach :"<< canJump(nums) << endl;

    return 0;

}