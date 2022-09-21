# 1013. Partition Array Into Three Parts With Equal Sum
'''
# Runtime 3031 ms(6.25%), Memory 19.1 MB(79.69%)
class Solution(object):
    def canThreePartsEqualSum(self, arr):
        total = sum(arr)
        if total % 3:
            return False
        part_total = total // 3
        for a in range(1, len(arr)-1):
            part1 = sum(arr[0:a])
            if part_total == part1:
                for b in range(a+1, len(arr)):
                    part2 = sum(arr[a:b])
                    if (part1 == part2):
                        return True
        return False
'''

# Runtime 1085 ms(6.25%), Memory 19.5 MB(9.38%)
class Solution(object):
    def canThreePartsEqualSum(self, arr):
        total = sum(arr)
        if total % 3:
            return False
        part_total = total // 3
        part1, part2 = 0, 0
        for a in range(0, len(arr)-2):          # sum(arr[0:a])
            part1 += arr[a]
            print("part1 : ", part1)
            if part_total == part1:
                for b in range(a+1, len(arr)-1):  # sum(arr[a:b])
                    part2 += arr[b]
                    if part_total == part2:
                        print("part2 : ", part2)
                        if part_total == sum(arr[b+1:]):
                            return True
                        else:
                            return False
        return False





# 1684. Count the Number of Consistent Strings
# Runtime 666 ms(5.30%), Memory 16.2 MB(12.91%)
class Solution(object):
    def countConsistentStrings(self, allowed, words):
        if set(words) - set(allowed):
            return False
        return True




# 1718. Construct the Lexicographically Largest Valid Sequence
# Runtime 49 ms, faster than 66.67%, Memory 13.3 MB, less than 100.00%
class Solution(object):
    def constructDistancedSequence(self, n):
        length = 2*n -1
        lst = [0] * length
        N = [a for a in range(1, n+1)]
        
        def dfs(i):
            if i == length:
                return all(lst)             # 0 있으면 false
            if lst[i] != 0:
                return dfs(i+1)             # 다음 자리로
            for nn in range(n, 0, -1):
                if nn in N:
                    i2 = i if nn == 1 else i+nn
                    if i2 < length and lst[i2] == 0:    # 뒤에도 넣을 수 있으면
                        lst[i] = nn
                        lst[i2] = nn
                        N.remove(nn)
                        if dfs(i+1):
                            return True
                        
                        x = lst[i]        # 있던거 빼고 다시
                        if x not in N:
                            N.append(x)
                        lst[i] = 0
                        lst[i2] = 0
            return False

        if dfs(0):  # 0~length
            return lst          
