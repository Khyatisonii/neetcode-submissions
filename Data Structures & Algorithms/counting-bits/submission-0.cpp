class Solution {
   public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            int count = 0;
            int m=i;
            while (m) {
                count += m & 1;  // check lowest bit
                m >>= 1;         // shift right
            }
            ans.push_back(count);
        }

        return ans;
    }
};
