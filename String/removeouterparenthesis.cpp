#include<iostream>
#include<string>
#include<stack>
using namespace std;
string removeParenthesis(const string &S){
    stack<char>st;
    string result;
    for(auto ch:S){
        if(ch=='('){
            if(!st.empty()){
                result+=ch;
            }
            st.push(ch);
        }
        else if (ch==')'){
            st.pop();
            if(!st.empty()){
                result+=ch;
            }
        }
    }
    return result;
}

int main(){
    string s;
    cout<<"Enter the string to remove parenthesis"<<endl;
    getline(cin,s);
    cout<<"After removal of  outer parenthesis "<<removeParenthesis(s)<<endl;


    return 0;
}
