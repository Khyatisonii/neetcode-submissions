class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int size=nums.size();
        int n=0;
        while(n<=size){
            if(s.find(n)==s.end()){
                return n;
            }
            n++;
        }
        return n;


    }
};
