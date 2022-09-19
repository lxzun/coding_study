//1013. Partition Array Into Three Parts With Equal Sum

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

