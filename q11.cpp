// Given an unsorted array Arr of size N of positive integers.
// One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs 
// twice in array. Find these two numbers.

// Example 1:
// Input:
// N = 2
// Arr[] = {2, 2}
// Output: 2 1
// Explanation: Repeating number is 2 and 
// smallest positive missing number is 1.

// Example 2:
// Input:
// N = 3
// Arr[] = {1, 3, 3}
// Output: 3 2
// Explanation: Repeating number is 3 and 
// smallest positive missing number is 2.

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int i=0;
        while(i<n)
        {
            while(arr[i]!=arr[arr[i]-1] && i<n)
            swap(arr[i],arr[arr[i]-1]);
            i++;
        }
        int *a=new int[2];
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                a[0]=arr[i];
                a[1]=i+1;
            }
        }
        return a;
    }
};

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Solution ob;
    auto ans = ob.findTwoElement(a, n);
    cout << ans[0] << " " << ans[1] << "\n";
    
    return 0;
}  