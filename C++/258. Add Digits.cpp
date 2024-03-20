//258. Add Digits

class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        int digitSum = 0;
        while(num){
            digitSum += num%10;
            num /= 10; 
        }
        return addDigits(digitSum);
    }
};