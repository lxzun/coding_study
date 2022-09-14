//1662. Check If Two String Arrays are Equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i(0);
        string w1 = "";
        string w2 = "";
        
        while(true){
            if (i >= word1.size() && i>= word2.size()) break;
            if (i < word1.size()) w1 += word1[i];
            if (i < word2.size()) w2 += word2[i];
            i++;
        }
        if (w1 == w2) return true;
        else return false;
    }
};

//1742. Maximum Number of Balls in a Box
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int>Bcount(highLimit+1, 0);
        
        for (int idx=lowLimit; idx<=highLimit; idx++){
            int cnt(0);
            string num = to_string(idx);
            for (int i=0; i<num.size(); i++){
                cnt += int(num[i]) - 48;
            }
            Bcount[cnt] += 1;
        }
        
        return *max_element(Bcount.begin(), Bcount.end());
    }
};


//646. Maximum Length of Pair Chain

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<int> dp(pairs.size(), 1);
        sort(pairs.begin(), pairs.end());
        int m = pairs[0][1];
        int idx(0);
        
        for (int i =0; i<pairs.size(); i++){
            if(pairs[i][0] > m){
                m = pairs[i][1];
                dp[i] = dp[idx] + 1;
                idx = i;
            }
            if (pairs[i][1] < m){
                m = pairs[i][1];
                dp[i] = dp[idx];
                idx = i;
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
