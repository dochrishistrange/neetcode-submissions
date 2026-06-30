class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        
        ans.push_back({1});
        if(numRows == 1) return ans;
        ans.push_back({1,1});
        if(numRows == 2)return ans;
        for(int i = 3; i <= numRows; i++)
        {

            vector<int>a;
            vector<int>ref = ans.back();
            a.push_back(ref[0]);
            for(int j = 0;  j < ref.size()-1; j++)
            {
                a.push_back(ref[j]+ref[j+1]);
            }
            a.push_back(ref[ref.size()-1]);
            ans.push_back(a);
        }
        return ans;
        
    }
};