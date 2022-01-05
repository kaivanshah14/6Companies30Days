// Decode the string

// An encoded string (s) is given, the task is to decode it. The pattern in which the strings were encoded were as follows
// original string: abbbababbbababbbab 
// encoded string : 3[a3[b]1[ab]]

// Example 1:

// Input: s = 1[b]
// Output: b
// Explaination: 'b' is present only one time.
// Example 2:

// Input: s = 3[b2[ca]]
// Output: bcacabcacabcaca
// Explaination: 2[ca] means 'ca' is repeated 
// twice which is 'caca' which concatenated with 
// 'b' becomes 'bcaca'. This string repeated 
// thrice becomes the output.
// Your Task:
// You do not need to read input or print annything. Your task is to complete the function decodedString() which takes s as input parameter and returns the decoded string.

// Expected Time Complexity: O(|s|)
// Expected Auxiliary Space: O(|s|)

// Constraints:
// 1 ≤ |s| ≤ 30 

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] == ']') 
            {
                string temp;
                while (!st.empty() && st.top() != '[') 
                {
                    temp = st.top() + temp;
                    st.pop();
                }
               
                st.pop();
                string num;
                
                while (!st.empty() && isdigit(st.top())) 
                {
                    num = st.top() + num;
                    st.pop();
                }
                int number = stoi(num);
                string repeat;
                for (int j = 0; j < number; j++)
                    repeat += temp;
                for (char c : repeat)
                    st.push(c);
            }
            
            else
                st.push(s[i]);
        }
        string res;
        while (!st.empty()) 
        {
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    string s;
    cin>>s;
    Solution ob;
    cout<<ob.decodedString(s)<<"\n";
    
    return 0;
}  // } Driver Code Ends