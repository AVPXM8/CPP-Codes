//   Lc 2918 Sum of Primes Between Number and Its Reverse
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

 bool isPrime( int n){
	if( n<2) return false;
        for( int i=2;i*i<=n;i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    
    int findReverse( int  n){
        int rev=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        return rev;
    }
    int sumOfPrimesInRange(int n) {
        int rev=findReverse(n);
        int minValue=min(n,rev);
        int maxValue=max(n,rev);
       // return findPrimeCount(maxValue)-findPrimeCount(minValue);
        int ans=0;
        for( int i=minValue;i<=maxValue;i++){
            if(isPrime(i))
                ans+=i;
        }
        return ans;
        
        
    }

int main(){
	int n;
	cout<<" Enter the number ";
	cin>>n;
	int ans=sumOfPrimesInRange(n);
	cout<<ans;
	
}