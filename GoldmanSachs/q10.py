#  Find max 10 numbers in a list having 10M entries.

import heapq

def maxNumbers(nums, n):
    heap = []
    for i in nums:
        heapq.heappush(heap,i)
    return heapq.nlargest(n,nums)
  
arr = list(map(int,input().split()))
print(maxNumbers(arr,10))

# Example
# Input 1: 1 2 3 4 55 6 7 88 99 100 101 2424 2415 6369 26936 43467 1566 165 20 446 65165 84512 58123 6541 54651 1651 421032 48116 41 51 854 869 427 515 2418 1542 5423 851247 848 87451 121 55 654564 984 898 8945 865 849984 894
# Output: [851247, 849984, 654564, 421032, 87451, 84512, 65165, 58123, 54651, 48116]
