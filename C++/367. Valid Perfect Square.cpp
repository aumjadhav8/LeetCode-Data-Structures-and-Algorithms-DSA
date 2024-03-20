//367. Valid Perfect Square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false;
        long long int i = 1;
        while (num > 0) {
            num -= i;
            i += 2;
        }
        return num == 0;
    }
};
