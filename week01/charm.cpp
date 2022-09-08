//94.Binary Tree Inorder Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    void abc(TreeNode* node){
        if (node == NULL) return;
        abc(node->left);
        res.push_back(node->val);
        abc(node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        abc(root);
        return res;
    }
};

//896.monotonic array
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>origin = nums;
        sort(nums.begin(), nums.end()); 
        if (origin == nums) return true;
        sort(nums.rbegin(), nums.rend());
        if (origin == nums) return true;
        return false;
    }
};

//2305. Fair Distribution of Cookies
class Solution {
public:
    int ans = INT_MAX;
    void dfs(vector<int>& cookies, vector<int>& child, int ind){
        cout << child[0] << " " << child[1] << endl;
        if (ind == cookies.size()){
            ans = min(*max_element(child.begin(), child.end()), ans);
            return ;
        }
        for (int i=0; i<child.size(); i++){
            child[i] += cookies[ind];
            dfs(cookies, child, ind+1);
            child[i] -= cookies[ind];
            if (child[i] == 0) break;
        }
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> childs(k, 0);
        dfs(cookies, childs, 0);
        return ans;
    }
};
