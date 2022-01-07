// Run Length Encoding 
// Example 1:
// Input:
// str = aaaabbbccc
// Output: a4b3c3
// Explanation: a repeated 4 times
// consecutively b 3 times, c also 3
// times.
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int n = str.length();
    for(int i=0; i<n; i++)
    {
        int count = 1;
        while(i<n-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}
