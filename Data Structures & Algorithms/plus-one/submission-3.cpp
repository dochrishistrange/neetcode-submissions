class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int sum = 0;
        int c = 0;
        vector<int>v;
        sum = digits[digits.size()-1]+1+c;
        v.push_back(sum%10);
        c = sum/10;
        for(int i = digits.size()-2; i >=0; i--)
        {   
            sum = digits[i] + c;
            v.push_back(sum%10);
            c = sum/10;
        }
        if(c) v.push_back(c);
        
        
        reverse(v.begin(), v.end());
        return v;
    }
};
