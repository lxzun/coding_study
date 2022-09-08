
#94. Binartt Tree Inorder Traversal
# Runtime:12ms(97.29%), Memory Usage:13.4MB(48.80%)
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        
        def dfs(a):
            if a is not None:
                dfs(a.left)
                res.append(a.val)
                dfs(a.right)
        dfs(root)
        return res

#896. Monotonic Array
# Runtime:1268ms, Memory Usage:24MB(72.85%)
class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        inc, dec = True, True
        
        for i in range(len(nums)-1):
            if nums[i] > nums[i+1]:
                inc = False
            elif nums[i] < nums[i+1]:
                dec = False
        return (inc or dec)
