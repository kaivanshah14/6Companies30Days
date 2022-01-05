#  Find max 10 numbers in a list having 10M entries.

import heapq

def maxNumbers(nums, n):
    heap = []
    for i in nums:
        heapq.heappush(heap,i)
    return heapq.nlargest(n,nums)
  
  arr = list(map(int,input().split()))
  maxNumbers(arr,10)
