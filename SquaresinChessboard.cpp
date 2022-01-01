// Find total number of Squares in a N*N chessboard
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  cout << "Total number of Squares in a " << n << "*" << n << " chessboard are: " << (n * (n + 1) / 2) * (2*n + 1) / 3;
  return 0;
}
