// Given an array of strings, 
// return all groups of strings that are anagrams. 
// The groups must be created in order of their 
// appearance in the original array. 
// Look at the sample case for clarification.

// Example 1:
// Input:
// N = 5
// words[] = {act,god,cat,dog,tac}
// Output: 
// god dog
// act cat tac
// Explanation:
// There are 2 groups of
// anagrams "god", "dog" make group 1.
// "act", "cat", "tac" make group 2.

// Example 2:
// Input:
// N = 3
// words[] = {no,on,is}
// Output: 
// no on
// is
// Explanation:
// There are 2 groups of
// anagrams "no", "on" make group 1.
// "is" makes group 2. 


#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) 
    {
        vector<vector<string>> ans;
        unordered_map <string, vector<string>> mp;
               
        for(int i=0;i<string_list.size();i++) 
        {
           string word = string_list[i];
           sort(word.begin(), word.end());
           mp[word].push_back(string_list[i]);
         }
        for(auto i : mp) 
        {
           ans.push_back(i.second);
        }    
        return ans;
    }
};


int main()
{
    int n;
    cin>>n;
    vector<string> string_list(n);
    for (int i = 0; i < n; ++i)
        cin>>string_list[i]; 
    Solution ob;
    vector<vector<string> > result = ob.Anagrams(string_list);
    sort(result.begin(),result.end());
    for (int i = 0; i < result.size(); i++)
    {
        for(int j=0; j < result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
 