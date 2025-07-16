// Given an array print all it's pair
#include<iostream>
using namespace std;
void print_pair(int source[]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<source[i]<<","<<source[j]<<endl;
        }
    }
}
int main(){
int arr[5];
cout<<"Enter 5 elements in array"<<endl;
for(int i=0;i<5;i++){
 cin>>arr[i];
 }
 print_pair(arr);

    return 0;
}