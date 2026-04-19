// Non decreasing array problem no 665
// check Problem on leetcode:  https://leetcode.com/problems/non-decreasing-array/description/
#include<iostream>
#include<vector>
using namespace std;

bool checkPossibility( vector<int>&nums)
{
    int n= nums.size();
    int temp=0;
    int count=0;
    for( int i=1;i<n;i++){
        if(nums[i]<nums[i-1] ){
            count++;
            temp=nums[i-1];
        }
        else 
         if(count>0&& nums[i]<temp){
            return false;
         }
        if( count>1)
        return false;
        
    }
    return true;
}
int main(){
    int n;
    cout<<" Enter the size of the array"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<" enter the array elements"<<endl;
    int i=0;
    while(i<n)
    cin>>nums[i++];
    if(checkPossibility(nums))
    cout<<" The array can be made  non decreasing"<<endl;
    else cout<<" The aray  can not be made non decreasing"<<endl;
    return 0;


}