class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        vector<int> tmp(len);
        for (int i = 0; i < len; i++) {
            tmp[i] = nums[(i + len - k) % len];
        }
        for (int i = 0; i < len; i++) {
            nums[i] = tmp[i];
        }
    }
};
