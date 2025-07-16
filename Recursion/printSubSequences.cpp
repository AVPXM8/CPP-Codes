#include<iostream>
using namespace std;

void printSubstring( string &str, int index, string &ans){
    // base case
    if(index>=str.length()){
        cout<<ans<<endl;
        return;

    }

    // include 
    ans.push_back(str[index]);
    printSubstring(str,index+1,ans);
    ans.pop_back();
    

    //exclude the current pattern 
    printSubstring(str,index+1,ans);



}

int main(){

     string str;
     cout<< "Enter your substring to print substrings"<<endl;
     cin>>str;
     string ans="";
     printSubstring(str,0,ans);
    return 0;
}
