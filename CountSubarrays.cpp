// Count the subarrays having product less than k 
// Example 1:
// Input : 
// n = 4, k = 10
// a[] = {1, 2, 3, 4}
// Output : 
// 7
// Explanation:
// The contiguous subarrays are {1}, {2}, {3}, {4} 
// {1, 2}, {1, 2, 3} and {2, 3} whose count is 7.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    long long int prod = 1;
    int j = 0, ans = 0;
    for(int i=0; i<n; i++)
    {
        prod *= a[i];
        while(j<n && prod>=k)
        {
            prod /= a[j++];
        }
        ans+=(i-j+1);
    }
    cout << ans;
    return 0;
}