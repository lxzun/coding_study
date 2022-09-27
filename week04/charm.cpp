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

