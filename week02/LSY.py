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
      


#646.py : 아직 안됨
class Solution(object):
    def findLongestChain(self, pairs):
        global cnt, n_max
        cnt, n_max = 1, 1
        '''
        def loop(pairs, stack, a):
            global cnt, n_max
            
            for b in range(a+1, len(pairs)):
                if pairs[a][1] < pairs[b][0]:
                    stack.append(pairs[b])
                    cnt += 1
                    if b != len(pairs)-1:
                        c = b
                        loop(pairs, stack, c)
                    elif a+1 != len(pairs)-1:
                        cnt -= 1
                        
                if b == len(pairs)-1:
                    print(stack)
                    n_max = max(cnt, n_max)
                    cnt -= 1
                    return n_max
            
            cnt -= 1
        '''
        pairs.sort(key=lambda x: x[0])
        i = 0
        while(i < len(pairs)-1):
            if pairs[i][0] == pairs[i+1][0]:
                if (pairs[i][1]-pairs[i][0]) < (pairs[i+1][1]-pairs[i+1][0]):
                    del pairs[i+1]
                else:
                    del pairs[i]
            i += 1
        print("pairs : ", pairs)
        for i in range(len(pairs)-1):
            cnt = 1
            stack = [pairs[i]]
            loop(pairs, stack, i)
        return n_max
