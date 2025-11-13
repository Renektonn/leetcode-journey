/*
i的左邊不包含 val
j的左邊是處理完成的
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        return i;
    }
};
