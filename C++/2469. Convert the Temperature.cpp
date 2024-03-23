//2469. Convert the Temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double f = 273.15+celsius;
        double k = ((celsius*9)/5) + 32;

        vector<double> ans;

        ans.push_back(f);
        ans.push_back(k);
        return ans;
    }
};