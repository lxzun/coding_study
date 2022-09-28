// 2186. Minimum Number of Steps to Make Two Strings Anagram II
// Runtime: 309 ms
// Memory Usage: 29.2 MB
class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> s_map;
        int ans = 0;
        
        for(char &i:s){
            s_map[i]++;
        }
        for(char &i:t){
            s_map[i]--;
        }
        for(auto &i:s_map){
            if(i.second==0) continue;
            ans+= abs(i.second);
        }
        return ans;
    }
};



// 1145. Binary Tree Coloring Game
// Runtime: 8 ms
// Memory Usage: 10.9 MB
class Solution {
public:
    TreeNode *m_stRoot;
    int m_s32Target;
    
    TreeNode* find_x(TreeNode *cur, int &sum){
        if (nullptr==cur) return nullptr;
        if (cur->val==m_s32Target) return cur;
        
        sum++;
        TreeNode *tmp;
        tmp = find_x(cur->left, sum);
        if (nullptr!=tmp){
            (void)find_x(cur->right, sum);
        } else{
            tmp = find_x(cur->right, sum);        
        }
        if (nullptr!=tmp) return tmp;
        return nullptr;
    }
    
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        m_stRoot=root;
        m_s32Target=x;
        int parAns=0;
        int leftAns=0;
        int rightAns=0;
        int TargetAns=0;
        
        TreeNode *target = find_x(root, parAns);
        (void)find_x(target->left, leftAns);
        (void)find_x(target->right, rightAns);
        
        bool ans = false;
        if(parAns>leftAns+rightAns) ans=true;
        if(leftAns>parAns+rightAns) ans=true;
        if(rightAns>leftAns+parAns) ans=true;
        return ans;
    }
};
