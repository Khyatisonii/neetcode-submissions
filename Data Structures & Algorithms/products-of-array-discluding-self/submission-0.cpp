class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool zero=false;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && !zero){
                zero=true;
            }else{
                prod*=nums[i];
            }
        }
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans[i]=prod;
                return ans;
            }
            if(!zero){
                ans[i]=prod/nums[i];
            }
        }
        return ans;
    }
};
