// Josephus Problem
// There are n people standing in a circle, numbered from 1 to n. Starting from person 1, counting proceeds in clockwise direction. In each step, exactly k-1 people are skipped, and the k-th person is eliminated from the circle. The counting then resumes from the next person, and the process continues until only one person remains.

// Determine the position of the last surviving person in the original circle.

#include<bits/stdc++.h>
using namespace std;

int josephus( vector<int> person, int k, int index){
    int n= person.size();
    if( n==1)
    return person[0];
    index= (index+k)%n;
    person.erase( person.begin()+index);
    return josephus( person,k, index);
}

int main(){
    int n, k;
    cout<<" Enter the  value of person and  value of k respectively"<<endl;
    cin>>n>>k;
    // k-1 person will skip so we can reduce the value of k hegre
    k--;
    vector<int>person;
    for( int i=1;i<=n;i++){
        person.push_back(i);
    }
    cout<<" The remaining person is the "<<josephus( person, k,0);
    return 0;

}