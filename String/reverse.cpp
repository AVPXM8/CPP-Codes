#include<iostream>
using namespace std;

int count_length(char abc[]){
    int length=0;
    while(abc[length]!=0){
        length++;

    }
    return length;
}
void reverse(char given[]){
    int i=0;
    int j=count_length(given)-1;
    while(i<j){
       char temp= given[i];
       given[i]=given[j];
       given[j]=temp;
       i++;
       j--; 
    }
}
int main(){
    // int n;
    // cout<<"Enter the size of the array"<<endl;
    // cin>>n;///we do not use variable length array; always define a size of the arr
    // array untill we are not dynamiacally allocating the array;
    // cin.ignore();
     char ch[100];
    cout<<"Enter your string to check length"<<endl;
    cin.getline(ch,100);
    cout<<"The entered string is "<<ch<<endl;
    cout<<"The length of the string is "<<count_length(ch)<<endl;
    reverse(ch);
    cout<<"The reverse string is "<<ch<<endl;
    


return 0;
}