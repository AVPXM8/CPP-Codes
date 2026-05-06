#include<iostream>
#include <vector>
using namespace std;

class prefixSum{
	private:
	vector<int>nums;
	vector<int>prefix;
	
	public:
	
	// Build array from user input
	void inputArray ( int n){
		nums.resize(n);
		cout<<" Enter array elements \n";
		for( int i=0;i<n;i++){
			cin>>nums[i];
		}
	}
	// create prefix sum
	void buildPrefx( ){
		int n= nums.size();
		prefix.resize(n);
		prefix[0]=nums[0];
		for( int i=1;i<n;i++){
			prefix[i]=prefix[i-1]+nums[i];
		}
		
	}
	// print both array and prefix sum
	void print(){
		cout<<" original array: ";
		for( int num:nums){
			cout<<num<<" ";
		}
		cout<<endl;
		cout<<" Prefix array: ";
		for( int pre:prefix){
			cout<<pre<<" ";
		}
		cout<<endl;
	}
	
	// range sum query
	int rangeSum( int left, int right){
		if(0==left)
		return prefix[right];
	return prefix[right]-prefix[left-1];
	}
	
};
int main(){
	prefixSum obj;
	int n;
	cout<<" Enter the size of the array "<<endl;
	cin>>n;
	obj.inputArray(n);
	obj.buildPrefx();
	obj.print();
	int left, right;
	cout<< " Enter the right index for range sum "<<endl;
	cin>>left>>right;
	cout<<" Range sum is "<<obj.rangeSum(left,right)<<endl;
	
	return 0;
}