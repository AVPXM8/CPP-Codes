#include<iostream>
using namespace std;
void printPermutation(string str, int index){
    if(index>=str.length()){
     cout<<str<<" ";
        return;
    }
        for (int j=index;j<str.length();j++){
            swap(str[j],str[index]);
            printPermutation(str,index+1);// ye to recursion hai 

        }
}

int main(){
    string str;
    cout<<"Enter string to print permutations"<<endl;
    cin>>str;
    int index=0;
    cout<<"All permutations are printed below"<<endl;
    printPermutation(str,index);
    return 0;
}