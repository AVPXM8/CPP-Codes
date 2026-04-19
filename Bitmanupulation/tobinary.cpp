#include<iostream>
#include<string>
using namespace std;
string toBinary( long long n){
    if(n==0|| n==1)
    return to_string(n);
    string ans="";
	// this is not recomnended as it is not optimised and will take more time for large numbers
    //while(n>0){
    //    ans=to_string(n&1)+ans;
    //   n= n>>1;
    //}
	
	// this is the optimised way to find the binary equivalent of a number
	while(n>0){
		ans+=(n&1)?'1':'0';
		n=n>>1;
	}
    return ans;
}
 
int main(){
    int n;
    cout<<" Enter the number to find the binary equivalent of that"<<endl;
    cin>>n;
    if(cin.fail()){
    cout << "Invalid input or overflow!";
    return 0;
}
    cout<<" The bianry equivalent of "<<n <<" is :"<<toBinary(n);
    
}