//Minimum Number of Operations to Move All Balls to Each Box
/*You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.
Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> moveOperation(string &boxes) {
    cout<<"function called"<<endl;
    int n = boxes.length();
    vector<int> ans(n, 0);
    
    // Pass 1: Left to Right
    // Calculate cost to move balls from left to current position i
    int balls_count = 0;
    int operations = 0;
    for (int i = 0; i < n; ++i) {
        ans[i] += operations;
        if (boxes[i] == '1') {
            balls_count++;
        }
        operations += balls_count;
    }

    // Pass 2: Right to Left
    // Calculate cost to move balls from right to current position i
    // and add it to the existing left-to-right cost.
    balls_count = 0;
    operations = 0;
    for (int i = n - 1; i >= 0; --i) {
        ans[i] += operations;
        if (boxes[i] == '1') {
            balls_count++;
        }
        operations += balls_count;
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
