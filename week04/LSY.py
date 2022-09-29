# 2186
# Runtime: 4140 ms, faster than 8.33%, Memory Usage: 18.2 MB, less than 25.00%
class Solution(object):
    def minSteps(self, s, t):
        st = Counter(s) - Counter(t)
        ts = Counter(t) - Counter(s)
        return sum(st.values()) + sum(ts.values())
      
# 1145
# nonononononononononononononono 노이해 알려죠오오오오
class Solution(object):
    def btreeGameWinningMove(self, root, n, x):
        def count(root, x):
            if(root is None):
                return 0
            l = count(root.left, x)
            r = count(root.right, x)
            
            if (root.val == x):
                leftCnt = l
                rightCnt = r
                
            return 1 + l + r
        
        leftCnt, rightCnt = 0, 0

        x_cnt = count(root, x)
        y_cnt = n - x_cnt - 1
        return (y_cnt) > n / 2
