// Given two rectangles, find if the given two rectangles overlap or not. 
// A rectangle is denoted by providing the x and y coordinates of two points: 
// the left top corner and the right bottom corner of the rectangle. 
// Two rectangles sharing a side are considered overlapping. 
// (L1 and R1 are the extreme points of the first rectangle and 
// L2 and R2 are the extreme points of the second rectangle).

// Note: It may be assumed that the rectangles are parallel to the 
// coordinate axis.


// Example 1:

// Input:
// L1=(0,10)
// R1=(10,0)
// L2=(5,5)
// R2=(15,0)
// Output:
// 1
// Explanation:
// The rectangles overlap.

#include<iostream>
using namespace std;
int main()
{
    int l1[2],r1[2],l2[2],r2[2];
    cin >> l1[0] >> l1[1] >> r1[0] >> r1[1] >> l2[0] >> l2[1] >> r2[0] >> r2[1];
    if (l1[0] > r2[0] || l2[0] > r1[0])
           cout << 0;
    else if (r1[1] > l2[1] || r2[1] > l1[1])
        cout << 0;
    else 
        cout << 1;
    return 0;
}