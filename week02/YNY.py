#1662
class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        word1 = ''.join(word1)
        word2 = ''.join(word2)
        if word1 == word2:
            return True
        else: return False


#1742
from collections import defaultdict
class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        boxes = defaultdict(int)
        for ball in range(lowLimit,highLimit+1):
            tmp = []
            flag = True
            while flag:
                if 0 < ball <10:
                    tmp.append(ball)
                    flag=False
                if ball//10 >= 1:
                    tmp.append(ball%10)
                    ball = ball//10
            boxes[sum(tmp)]+=1
        return max(boxes.values())
