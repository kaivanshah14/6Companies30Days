// Input : N = 5 // Size of circle
//         M = 2 // Number of items
//         K = 1 // Starting position
// Output : 2
// The first item will be given to 1st 
// position. Second (or last) item will 
// be delivered to 2nd position

// Input : N = 5 
//         M = 8 
//         K = 2
// Output : 4
// The last item will be delivered to 
// 4th position
#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    cout << k + (m%n) - 1;
}
