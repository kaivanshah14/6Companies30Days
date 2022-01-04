// Ugly numbers are numbers whose only prime factors are 2, 3 or 5. 
// The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … 
// shows the first 11 ugly numbers. By convention, 1 is included. 
// Write a program to find Nth Ugly Number.

// Example 1:

// Input:
// N = 10
// Output: 12
// Explanation: 10th ugly number is 12.

#include<iostream>
#include<set>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    set<long long int> s;
    s.insert(1);
    n--;
    while(n--)
    {
        auto it = s.begin();
        long long int x = *it;
        s.erase(it);
        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
    }
    cout << *s.begin();
    return 0;
}