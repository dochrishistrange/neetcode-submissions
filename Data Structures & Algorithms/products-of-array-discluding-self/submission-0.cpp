class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
       
        int prod = 1;
        int zeroCount = 0;
        int prodspecial = 1;
        for(auto i :nums)
        {   

            if(zeroCount == 1)
            {
                prodspecial = prodspecial *i;
            }// i need the complete product without the 0
            if(i == 0 && zeroCount == 0)
            {
                prodspecial = prodspecial * prod;
                zeroCount++;
            }
            
             else if( i== 0 && zeroCount == 1)
            {
                prod = 0;
                prodspecial = 0;
               
                break;
            }
            prod = prod * i;
        }
        

        for(int i =0; i < n; i++)
        {   
            if(nums[i] == 0)
            {
                ans[i] = prodspecial;
            }
            else
            ans[i] = prod/nums[i];

        }
        return ans;
    }
};
