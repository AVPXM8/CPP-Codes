#include<iostream>
using namespace std;
void swapwithxor(int &a,int &b){// a=2,b=5
	 a=a^b; //a=2^5
	 b=a^b; // b=2^5^5=2
	 a=a^b;// a=2^5^2=5
	 //hence swapped
	
}
void usingTemp( int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
void byaddition( int &a, int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	int a,b;
	cout<<"Enter  the value of a & b" <<endl;
	cin>>a>>b;
	cout<< "before swapping the enteredvalues are a: "<<a<<" b: "<<b<<endl;
	cout<<" after swap :"<<endl;
	//swapwithxor(a,b);
	//byaddition(a,b);
	usingTemp(a,b);
	
	cout<<"a= "<<a<<" b="<<b;
	
	
	return 0;
	
}