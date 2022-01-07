// Count ways to N'th Stair(Order does not matter)

// There are N stairs, and a person standing at the bottom wants to reach the
// top. The person can climb either 1 stair or 2 stairs at a time. 
// Count the number of ways, the person can reach the top 
// (order does not matter).
// Note: Order does not matter means for n=4 {1 2 1},{2 1 1},{1 1 2} are 
// considered same.

// Example 1:
// Input:
// N = 4
// Output: 3
// Explanation: You can reach 4th stair in
// 3 ways.
// 3 possible ways are:
// 1, 1, 1, 1
// 1, 1, 2
// 2, 2


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long countWays(int m)
    {
        // your code here
        return m/2+1;
    }
};


int main()
{

    int t;
    cin >> t;
    
    while(t--)
    {

        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; 
    }
    return 0;
}
