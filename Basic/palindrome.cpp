#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome( int n){
    string str= to_string(n);
    int k = str.length();
    int i=0,j=k-1;
    while( i<j){
        if( str[i]!=str[j])
        return false;
        i++;
        j--;
    }
    return true;

}

int main(){
    int n;
    cout<<" Enter the number to check if it is palindrome or not"<<endl;
    cin>>n;
    if(checkPalindrome(n))
    cout<<" Given number is palindrome"<<endl;
    else
    cout<<" The given number is not palindrome"<<endl;
     return 0;
}