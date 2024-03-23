//70. Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        int a=1,b=1;
        for(int i=1;i<n;i++)
        {
            b+=a;
            a=b-a;
        }
        return b;
    }
};