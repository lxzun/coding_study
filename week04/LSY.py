# 2186
# Runtime: 4140 ms, faster than 8.33%, Memory Usage: 18.2 MB, less than 25.00%
class Solution(object):
    def minSteps(self, s, t):
        st = Counter(s) - Counter(t)
        ts = Counter(t) - Counter(s)
        return sum(st.values()) + sum(ts.values())
      
# 1145
#
