// Array Pair Sum Divisibility Problem

// Example 1 :

// Input : arr = [9, 5, 7, 3], k = 6
// Output: True
// Explanation: {(9, 3), (5, 7)} is a 
// possible solution. 9 + 3 = 12 is divisible
// by 6 and 7 + 5 = 12 is also divisible by 6.
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> a, int k) {
        map<int,int>m;
       int n=a.size();
       for(int i=0;i<n;i++){
           m[a[i]%k]++;
       }
       for(int i=0;i<n;i++){
           int r=a[i]%k;
           if(r==0){
               if(m[0]&1)return 0;
           }
           else if(m[r]!=m[k-r])return 0;
       }
       return 1;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++) cin >> nums[i];
    Solution ob;
    bool ans = ob.canPair(nums, k);
    if (ans)
        cout << "True\n";
    else
        cout << "False\n";
return 0;
} 