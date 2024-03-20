// 191. Number of 1 Bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        while(n!=0){
            if(n&1){
                counter = counter+1;
            }
            n=n>>1;
        }
        return counter;
    }
};