
//3330. Find the Original Typed String I  have to return the ppossible no of string that she want to try may be
#include<iostream>
#include<string>
using namespace std;

int ways(string s){
    int n=s.length();
    int ans=0;
    int count=-1;
    for(int i=0;i<n;i++){
        int j=i+1;
        while(s[i]==s[j]){
            j++;
        }
        int dif=j-i;
        if(dif>1){
            ans+=dif;
            count++;
            i=j-1;
        }
    }
    if(ans==0) return 1;
    else return ans-count;
}
int main(){

    string s;
    cout<<"hii Alice enter your string"<<endl;
    getline(cin,s);
    cout<<" Alice may want to type within the combination of "<<ways(s)<<" strings"<<endl;


    return 0;
}