#include<iostream>
#include<string>
using namespace std;

long long todecimal(string binary){
	long long ans=0;
	for( char bit:binary){
		ans=ans*2+ (bit-'0');
	}
	return ans;
	
}

int main(){
	string binary;
	cout<<" Enter binary number :"<<endl;
	cin>>binary;
	if(cin.fail()){
		cout<<" The invalid input or overflow ";
		return -1;
	}
	cout<< " The decimal equivalent to given "<<binary<< " is :"<<todecimal(binary);
	return 0;
}
