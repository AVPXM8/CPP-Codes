#include<iostream>
#include<vector>
using namespace std;

  void printSubset( int index, vector<int>&nums, vector<int>ans){
    if(index>=nums.size()){
        for(int i=0;i<ans.size();i++)
        cout <<ans[i];
        return;
    }
    // exlcude
    printSubset(index+1,nums,ans);

    //include
    ans.push_back(nums[index]);
    printSubset(index+1,nums,ans);
    ans.pop_back();
  }
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans;
    printSubset(0,nums,ans);
    return 0;
}