/* 1480. Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
 Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>runningSumArr(n);
        runningSumArr[0]=nums[0];
        for(int i=1;i<n;i++ ){
            runningSumArr[i]=runningSumArr[i-1]+nums[i];

        }
        return runningSumArr;

        
    }
};
int main(){
    int n;
    cout<<" Enter the size of the array: "<<endl;
    cin>>n;
    // declare array
    vector<int>nums(n);
    cout<<" Enter the array element sepereated by space: "<<endl;
    for( int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    vector<int>ans(n);
    ans=obj.runningSum(nums);
    cout<<" The running sum array is as follows: "<<endl;
    for( int val:ans){
        cout<<val<<" ";
    }
    return 0 ;
}