//1486. XOR Operation in an Array
//https://leetcode.com/problems/xor-operation-in-an-array/description/

#include<iostream>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int bitwiseXor=0;
        for( int i= 0;i<n;i++){
            bitwiseXor^=start+2*i;
        }
        return bitwiseXor;
        
    }
};
int main(){
	Solution obj;
	int n, start;
	cout<<" Enter the value of the n and start "<<endl;
	cin>>n>>start;
	int ans=obj.xorOperation(n,start);
	cout<<" Xor operation is: "<<ans;
}