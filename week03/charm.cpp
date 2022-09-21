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

//Time limit exceeded
class Solution {
public:
    vector<int> result;
    void dfs(vector<int>& res, int n, int idx){
        if (n == 1) {
            vector<int>::iterator it;
            it = find(res.begin(), res.end(), 0);
            *it = 1;
            // for (int i=0; i<res.size(); i++){
            //     cout << res[i];
            // }
            // cout << endl;
            if (result.empty()) result = res;
            if (!result.empty() && result < res) result = res;
            *it = 0;
            return;
        }
        if (idx+n >= res.size()) return; //못찾으면
        
        //가장 앞자리부터 확인
        if (res[idx]==0 && res[idx+n] == 0){ //들어갈 수 있는 곳 찾음
            res[idx] = n;
            res[idx+n] = n;
            dfs(res, n-1, 0);
            res[idx] -= n;
            res[idx+n] -= n;
        }
        dfs(res, n, idx+1); 
        
        return;
    }
    
    vector<int> constructDistancedSequence(int n) {
        vector<int> res(2*n-1, 0);
        res[0] = n;
        res[n] = n;
        dfs(res, n-1, 0);
        return result;
    }
};
