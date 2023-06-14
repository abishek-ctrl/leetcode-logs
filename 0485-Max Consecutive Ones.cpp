class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int maxConsecutive = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                c++;
                maxConsecutive = max(maxConsecutive, c);
            } else {
                c = 0;
            }
        }
        return maxConsecutive;
    }
};
