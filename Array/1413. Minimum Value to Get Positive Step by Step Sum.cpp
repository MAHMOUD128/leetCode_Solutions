class Solution {
public:
    int minStartValue(vector<int>& nums) {
      auto sum = 0, min_sum = 0;
    for (auto it : nums) {
        sum += it;
        min_sum = min(min_sum, sum);
    }
    return abs(min_sum)+1 ;
    }
};