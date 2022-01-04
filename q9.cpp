// Given a pattern containing only I's and D's. 
// I for increasing and D for decreasing.
// Devise an algorithm to print the minimum number following that pattern.
// Digits from 1-9 and digits can't repeat.

// Example 1:
// Input:
// D
// Output:
// 21
// Explanation:
// D is meant for decreasing,
// So we choose the minimum number
// among 21,31,54,87,etc.
 
// Example 2:
// Input:
// IIDDD
// Output:
// 126543
// Explanation:
// Above example is self- explanatory,
// 1 < 2 < 6 > 5 > 4 > 3
// I - I - D - D - D

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        string ans="";
        stack<int> st;
        int n = 1;
        for(auto x: S)
        {
            if(x=='D')
            {
                st.push(n);
                n++;
            }
            else
            {
                st.push(n);
                n++;
                while(!st.empty())
                {
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(n);
        while(!st.empty())
        {
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    
    string S;
    cin >> S;
    Solution ob;
    cout << ob.printMinNumberForPattern(S) << endl;
    return 0; 
} 
  // } Driver Code Ends