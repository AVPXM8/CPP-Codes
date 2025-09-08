//Minimum Number of Operations to Move All Balls to Each Box
/*You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.
Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int >moveOperation( string &s){
    cout<<"function called"<<endl;
    int n=s.length();
    vector<int>ans(n);
    // store the index that have 1
    vector<int >store;
    for( int i=0;i<n;i++){
        if(s[i]=='1'){
            store.push_back(i);
        }
    }
    // using the store compute the opereations
    for( int i=0;i<n;i++){
        int temp=0;
        //check in our store and add
        for ( int j=0;j<store.size();j++){
            temp+=abs(i-store[j]);

        }
        ans[i]=temp;
    }
cout<<"returning ans"<<endl;
return ans;
}
int main(){
    string s;
    cout<< "enter the string"<<endl;
    cin>>s;
    int n=s.length();
    for( auto i:s) cout<<i;
    vector <int >ans;
    ans= moveOperation(s);
    for( int i =0;i<n;i++){
        cout<<" the opereation required for the " <<i<<"th box "<<ans[i]<<endl;
    }
    cout<<"returning a value"<<endl;
    return 0;
}
