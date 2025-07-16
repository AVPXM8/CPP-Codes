#include<iostream>
// #include<string>
using namespace std;
     void printPermutation(string &str,int index){
        if(str.length()<=index){
            cout<<str<<" ";
            return;
        }
        for(int j=index;j<str.length();j++){
            swap(str[j],str[index]);
            printPermutation(str,index+1);
            swap(str[j],str[index]);// backtracking

        }
     }
int main(){
    // we will create a string and pass by reference so the every time it will not create copy and will save space
   string str;
    cout<<"Enter the string"<<endl;
    // getline(cin,str);
    cin>>str;
    cout<<"All permutation of the string are:";
    printPermutation(str,0);

    return 0;

}
