/* 1903. Largest Odd Number in String
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
A substring is a contiguous sequence of characters within a string.
 */
 
 #include<iostream>
 #include<string>
// #include<algorithm>
 using namespace std;
 string longestOdd(string s){
    int ans=0;
    int odd;
    for( char c:s){
        string ch(1,c);
        int a=stoi(ch);
        if(a%2!=0){
            odd=a;
            ans=max(odd,ans);
        }
        


    }
    if( ans>0) return to_string(ans);
    else return "";
 }
 int main(){
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    cout<<"The longest odd digit is "<<longestOdd(s)<<endl;
 }
 