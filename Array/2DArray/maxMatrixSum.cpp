// 1975. Maximum Matrix Sum

// You are given an n x n integer matrix. You can do the following operation any number of times:
// Choose any two adjacent elements of matrix and multiply each of them by -1.
// Two elements are considered adjacent if and only if they share a border.
// Your goal is to maximize the summation of the matrix's elements. Return the maximum sum of the matrix's elements using the operation mentioned above.

//  Example   :-----> Input: matrix = [[1,-1],[-1,1]]
// Output: 4
// Explanation: We can follow the following steps to reach sum equals 4:
// - Multiply the 2 elements in the first row by -1.
// - Multiply the 2 elements in the first column by -1.

#include<iostream>
#include<vector>
// #include<cmath>
// #include<algorithm>
using namespace std;
class Solution{
public:
long long findMatrixsum( vector<vector<int>>&matrix, int rows, int cols){
    int negativeCount=0;
    long long sum=0;
    int minVal=INT_MAX;
    for( int i=0;i<rows;i++){
        for( int j=0;j<cols;j++){
            int val=matrix[i][j];
            sum+=abs(val);
            
            if(val<0)
            negativeCount++;
            minVal=min( minVal,abs(val));

        }
    }
    if( negativeCount%2==0)
    return sum;
    else return sum-2*minVal;

}

};

int main(){

    int rows,column;
    cout<<" Enter the no of rows follows by number of columns of the 2d matrix";
    cin>>rows>>column;
    vector<vector<int>>matrix(rows, vector<int>(column));
    cout<<" Enter the array elements "<<endl;
    for( int i=0;i<rows;i++){
        for( int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }
    Solution obj;
   long long result= obj.findMatrixsum(matrix,rows,column);
   cout<<" the max sum after the operations is "<<result<<endl;

    
return 0;
}

  