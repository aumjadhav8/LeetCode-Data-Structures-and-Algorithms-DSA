//1688. Count of Matches in Tournament

class Solution {
public:
    int numberOfMatches(int n) {
        int x=0;
        while(n>=2){
            x+=n/2;
            n= n-(n/2);
        }
        return x;
    }
};