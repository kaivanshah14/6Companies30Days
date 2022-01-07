// First non-repeating character in a stream

// Given an input stream of A of n characters consisting only of lower case alphabets. 
// The task is to find the first non repeating character, each time a character is inserted to the stream.
// If there is no such character then append '#' to the answer.
 

// Example 1:
// Input: A = "aabc"
// Output: "a#bb"
// Explanation: For every character first non
// repeating character is as follow-
// "a" - first non-repeating character is 'a'
// "aa" - no non-repeating character so '#'
// "aab" - first non-repeating character is 'b'
// "aabc" - first non-repeating character is 'b'


#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		string FirstNonRepeating(string a)
		{
		 int arr[26]={0};
         queue<int> q;
         for(int i=0;i<a.length();i++)
         {
             arr[a[i]-'a']++;
             if(arr[a[i]-'a']==1)q.push(a[i]);
             
             while(!q.empty() && arr[q.front()-'a']!=1)q.pop();
             
             if(q.empty())a[i]='#';
             else a[i]=q.front();
         }
            return a;
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
