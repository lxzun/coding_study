# 1662: Runtime 30ms (50.36%), Memory 13.5MB (72.75%)
class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        w1 = "".join(word1)
        w2 = "".join(word2)
        print(w1, w2)

        if len(w1) != len(w2):
            return False
        elif w1 == w2:
            return True
        else:
            return False
          
          
# 1742: Runtime 2566ms (5.31%), Memory 16.3MB (30.09%)

class Solution(object):
    def countBalls(self, lowLimit, highLimit):
        B_cnt = [0 for a in range(46)]
        for i in range(lowLimit, highLimit+1):
            summ = 0
            i_list = list(str(i))
            for i_split in i_list:
                summ += int(i_split)
            B_cnt[summ] += 1
        return max(B_cnt)
      
