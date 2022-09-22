//1013. Partition Array Into Three Parts With Equal Sum

// Runtime : 54ms (90.76%), Memory : 35.5 MB (5.06%)

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        vector<int> sum;
        int tmp = 0;
        for (int i=0; i<arr.size(); i++){
            tmp += arr[i];
            sum.push_back(tmp);
        }
        
        if (sum.back() != sum.back()/3*3) return false; //3배수 아니면 false
      
        if (sum.back() == 0 && count(sum.begin(), sum.end(), 0) >= 3) return true; 
        
        vector<int>::iterator first_iter;
        vector<int>::iterator second_iter;
        
        first_iter = find(sum.begin(), sum.end(), sum.back()/3);
        
        if (first_iter != sum.end()){
            first_iter++;
            if (find(first_iter, sum.end(), sum.back()/3*2) != sum.end()){
                second_iter = find(first_iter, sum.end(), sum.back()/3*2);
                if (second_iter != --sum.end()) return true;
            }
        }
        return false;
    }
};

//1684. Count the Number of Consistent Strings

// Runtime : 156ms (15.30%), Memory : 30.1 MB (63.63%)

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) { 
        int cnt(0);
        for (int i=0; i<words.size(); i++){
            bool isCon = true;
            for (int j=0; j<words[i].size(); j++){ 
                if (allowed.find(words[i][j]) != string::npos) continue;
                else {
                    isCon = false;
                    break;
                }
            }
            if (isCon) {
                cnt++;
            }
        }
        return cnt;
    }
};


//1718. Construct the Lexicographically Largest Valid Sequence

class Solution {
public:
    bool solve(vector<int>& ans, int ind, vector<bool>& vis, int n){
        if(ind==ans.size()) return 1;
        
        if(ans[ind]!=0) return solve(ans,ind+1,vis,n);
        
        for(int i = n; i >= 1; i--){
            if(vis[i]) continue; //본것이면 pass
            
            vis[i] = 1;
            ans[ind] = i;
            
            if(i==1) {
                if(solve(ans,ind+1,vis,n)) return 1;
            }
            else if(ind+i<ans.size() && ans[ind+i]==0){
                    ans[ind+i] = i;
                    if(solve(ans,ind+1,vis,n)) return 1;
                    ans[ind+i] = 0;
            }
            
            vis[i] = 0;
            ans[ind] = 0;
        }
        
        return 0;
    }
    
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(2*n-1,0);
        vector<bool> vis(n+1,0);
        
        solve(ans,0,vis,n);
        
        return ans;
    }
};
