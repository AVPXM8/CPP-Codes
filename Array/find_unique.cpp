// We have given an array in which each number appears twice but there's a single digit which appeares only once find that unique element
#include<iostream>
using namespace std;
int find_unique(int arr[],int size){
int answer=0;
for(int i=0;i<size;i++){
answer=answer^arr[i];
}
return answer;
}
int main(){
   //Given array
   int size =9;
   int arr[]={10,5,6,2,8,6,5,8,10};
   cout<<"The Element is "<<find_unique(arr,size);
    return 0;
}