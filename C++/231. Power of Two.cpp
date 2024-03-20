//231. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        int x=log(n)/log(2);
        return pow(2,x)==n;
    }
};