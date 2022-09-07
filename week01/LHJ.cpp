// 94. Binary Tree Inorder Traversal
class Solution {
private:
    vector<int> m_arr;    
    
public:
    void _inorderTraversal(TreeNode* root) {
        if (nullptr == root){
            return;
        }
        _inorderTraversal(root->left);
        m_arr.push_back(root->val);
        _inorderTraversal(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root){
        _inorderTraversal(root);
        return m_arr;
    }
};


// 896. Monotonic Array
class Solution {
public:
    bool isMonotonic_pos(vector<int>& nums) {
        int prev = nums[0];
        for (int &i:nums){
            if (i<prev){
                return false;
            }
            prev = i;
        }
        return true;
    }
    bool isMonotonic_neg(vector<int>& nums) {
        int prev = nums[0];
        for (int &i:nums){
            if (i>prev){
                return false;
            }
            prev = i;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        bool pos, neg;
        pos = isMonotonic_pos(nums);
        if (pos){return pos;}
        neg = isMonotonic_neg(nums);
        return neg;
    }
};


// 2305. Fair Distribution of Cookies
class Solution {
public:
    void dist(vector<int>& cookies, vector<int>& children, int &sol){
        if (cookies.empty()){
            int ret=*max_element(children.begin(), children.end());
            if (ret<sol) sol=ret;
            return;
        }
        int tmp = cookies.back();
        cookies.pop_back();
        
        for(int i = 0; i<children.size(); i++){
            children[i]+=tmp;
            dist(cookies, children, sol);
            children[i]-=tmp;
        }
        cookies.push_back(tmp);
    }
    int distributeCookies(vector<int>& cookies, int k) {   
        vector<int> children(k);
        int sol = 999999;
        dist(cookies, children, sol);
        return sol;
    }
};
