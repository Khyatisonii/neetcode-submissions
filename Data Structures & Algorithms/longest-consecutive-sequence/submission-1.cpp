class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        int curr=1;
        int len=0;
        for(auto it: s){
            if(s.find(it+1)!=s.end()){
                curr++;
            }else{
                len=max(len,curr);
                curr=1;
            }
        }
        return len;
    }
};
