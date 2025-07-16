#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(const string& str){
    int start=0;
    int end= str.length()-1;
    while(start<end){
        if(str[start]!=str[end])
        return false;
        start++;
        end--;
    }
    return true;
}
int main(){
string mystr;
cout<<"Enter the string "<<endl;
getline(cin,mystr);
cout<<"The input string is "<<mystr<<endl;
check_palindrome(mystr)? cout<<" String is palindrome":cout<<"String is not palindrome";

    return 0;
}