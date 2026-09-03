class Solution {
   public:
    int getSum(int a, int b) {

    uint32_t sum = (uint32_t)a + (uint32_t)b;  // wraps on overflow
    return (int)sum;   
    }
};
