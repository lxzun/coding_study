// 1662. Check If Two String Arrays are Equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one(word1[0]);
        string two(word2[0]);
        for (int i=1 ;i < word1.size();i++){
            one += word1[i];
        }
        for (int i=1 ;i < word2.size();i++){
            two += word2[i];
        }
        return one==two;
    }
};



// 1742. Maximum Number of Balls in a Box

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int arr[9*5]={};
        for (int i = lowLimit; i <= highLimit; i++){
            int tmp(i);
            int sum(0);
            while (tmp!=0){
                sum += tmp%10;
                tmp = tmp/10;
            }
            arr[sum-1] += 1;
        }
        int sol=0;
        for(int &i:arr){
            if (sol<i) sol=i;
        }
        return sol;
    }
};



// 646. Maximum Length of Pair Chain

class Solution {
public:
    static bool compare(const vector<int>&p1, const vector<int>&p2){
        if (p1[1]==p2[1]){
            return p1[0]>p2[0];
        }
        return p1[1]<p2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), compare);
        int sol = 1;
        vector<int> &tmp(pairs[0]);
        for (int i=1; i<pairs.size(); i++){
            if (pairs[i][0]>tmp[1]){
                sol++;
                tmp = pairs[i];
                }
        }
        return sol;
    }
};
