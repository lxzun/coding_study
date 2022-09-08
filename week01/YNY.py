
#94. Binartt Tree Inorder Traversal
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root):
        ans = []
        def inorder(node):
            if node:
                inorder(node.left)
                ans.append(node.val)
                inorder(node.right)

        inorder(root)
        return ans

#896. Monotonic Array
def isMonotonic(nums):
    tmp = nums[0]
    increase = 0
    decrease = 0
    same = 0
    for i in range (1,len(nums)):
        if tmp > nums[i]:
            tmp = nums[i]
            decrease +=1
        elif tmp < nums[i]:
            tmp = nums[i]
            increase +=1
        elif tmp == nums[i]:
            tmp = nums[i]
            same +=1
    if increase+same ==len(nums)-1 or decrease+same ==len(nums)-1:
        return True
    else:
        return False
