//   Input: nums = [2,0,2,1,1,0]
//Output: [0,0,1,1,2,2]



#include<iostream>
using namespace  std;

void sortColors( vector<int>&nums){
    int n= num.size();
    int start=0;
    int end=n-1;
   for( int i=0;i<n;i++){
     int zero=0;
     int two=n-1;
     if( nums[i]==0){
        swap( nums[i],nums[zero+]);
        i--;
     }
     else if( nums[i]==2){
        swap( nums[i],nums[two--]);
        i--;
     }
     
   }

}
int main( ){
    int n;
    cout<<" Enter the size"<<endl;
    cin>>n;
    vector<int>n;
    cout<<" Enter the element that would only contain "
}
