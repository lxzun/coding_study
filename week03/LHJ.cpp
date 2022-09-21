// 1013. Partition Array Into Three Parts With Equal Sum
// Runtime: 90 ms, faster than 40.45% of C++ online submissions for Partition Array Into Three Parts With Equal Sum.
// Memory Usage: 32.5 MB, less than 59.81% of C++ online submissions for Partition Array Into Three Parts With Equal Sum.

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum(0);
        for(int &i:arr){
            sum+=i;
        }
        if (sum%3!=0) return false;
        
        int target = sum/3;
        sum=0;
        int ans(0);
        for (int&i:arr){
            sum+=i;
            if (sum==target){
                sum=0;
                ans++;
            }
            if (ans>=3)
                return true;
        }
        return false;
    }
};



// 1684. Count the Number of Consistent Strings
// Runtime: 193 ms, faster than 7.52% of C++ online submissions for Count the Number of Consistent Strings.
// Memory Usage: 30.2 MB, less than 63.63% of C++ online submissions for Count the Number of Consistent Strings.

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=words.size();
        set<char> all;
        for(auto&i:allowed){
            all.insert(i);
        }
        for (string &i:words){
            sort(i.begin(), i.end());
            i.erase(unique(i.begin(), i.end()), i.end());
            for(auto&j:i){
                auto iter = all.find(j);
                if (iter==all.end()){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};


// 1718. Construct the Lexicographically Largest Valid Sequence
// Runtime: 5 ms, faster than 36.65% of C++ online submissions for Construct the Lexicographically Largest Valid Sequence.
// Memory Usage: 6.4 MB, less than 22.36% of C++ online submissions for Construct the Lexicographically Largest Valid Sequence.

class Solution
{
public:
    void DFS(int &target, int idx, vector<int> &maps, vector<bool> &nums)
    {
        if (!ans.empty())return;
        if (idx == (2 * target - 2))
        {
            if (maps[2 * target - 2] == 0)
                maps[2 * target - 2] = 1;
            ans = maps;
            return;
        }
        if (maps[idx] != 0)
        {
            DFS(target, idx + 1, maps, nums);
            return;
        }

        for (int i = target; i > 0; i--)
        {
            if (nums[i - 1])
                continue;
            if (i == 1)
            {
                maps[idx] = i;
                nums[i - 1] = true;
                DFS(target, idx + 1, maps, nums);
                nums[i - 1] = false;
                maps[idx] = 0;
            }
            else if (idx + i > target * 2 - 2)
                continue;
            else if (maps[idx + i] != 0)
                continue;
            else
            {
                maps[idx] = i;
                maps[idx + i] = i;
                nums[i - 1] = true;
                DFS(target, idx + 1, maps, nums);
                nums[i - 1] = false;
                maps[idx] = 0;
                maps[idx + i] = 0;
            }
        }
        return;
    }

    vector<int> ans;

    vector<int> constructDistancedSequence(int n)
    {
        vector<bool> nums(n);
        vector<int> maps(2 * n - 1);
        for (int i = 0; i < n; i++)
        {
            nums[i] = false;
        }
        int idx = 0;
        DFS(n, idx, maps, nums);
        return ans;
    }
};


