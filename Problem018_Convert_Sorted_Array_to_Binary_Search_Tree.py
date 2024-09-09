class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

from typing import List, Optional

class Solution:

    head = TreeNode()

    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        self.rec(nums, self.head)

        return self.head

    def rec(self, nums: List[int], current : TreeNode) -> Optional[TreeNode]:
        
        if(len(nums) == 0):
            current.val = None
            return

        mid = len(nums) // 2

        current.val = nums[mid]

        if(len(nums[0:mid]) > 0): 
            current.left = TreeNode()
            self.rec(nums[0:mid], current.left)
        else:
            current.left = None

        if(len(nums[mid+1:len(nums)]) > 0): 
            current.right = TreeNode()
            self.rec(nums[mid+1:len(nums)], current.right)
        else:
            current.right = None



s = Solution()
s.sortedArrayToBST([-10,-3,0,5,9])


def printList(current : TreeNode):

    if(current == None):
        return

    print(current.val)
    printList(current.left)
    printList(current.right)

print('arr : ' , s.head.val)

printList(s.head)
