//2186. Minimum Number of Steps to Make Two Strings Anagram II
//Runtime : 376 ms, faster than 27.28% 
//Memory : 29.2 MB, less than 14.65% 

class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> m;
        
        for(int i=0; i<26; i++){
            m[(char)(97+i)] = 0;
        }
        
        for (int i=0; i<s.size(); i++){
            m[s[i]] += 1;
        }
        
        for (int i=0; i<t.size(); i++){
            m[t[i]] = m[t[i]]-1;
        }
        
        int res(0);
        for(auto it = m.begin(); it != m.end(); it++){
		    res+=abs(it->second);
	    }
        
        return res;
    }
};

//1145. Binary Tree Coloring Game
//Runtime : 7 ms, faster than 50.41% 
//Memory : 10.7 MB, less than 64.55%
class Solution {
public:
    int l_cnt = 0;
    int r_cnt = 0;
    
    void dfs(TreeNode* node, int& cnt, int& x, bool isFind){
        if (node == NULL) return;
        if (isFind) cnt++;
        if (node->val == x) {
            isFind = true;
            dfs(node->left, l_cnt, x, isFind);
            dfs(node->right, r_cnt, x, isFind);
        }
        dfs(node->left, cnt, x, isFind);
        dfs(node->right, cnt, x, isFind);
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) { //같은 깊이의 다른 노드 선택, 무조건 왼쪽으로
        int cnt = 0;
        dfs(root, cnt, x, false);
        int m_cnt = max({l_cnt, r_cnt, (n-(l_cnt+r_cnt+1))});
        if (m_cnt > n-m_cnt) return true;
        return false;
    }
};
