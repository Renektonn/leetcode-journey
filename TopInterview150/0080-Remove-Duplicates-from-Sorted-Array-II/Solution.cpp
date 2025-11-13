class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            int k = nums[j];
            if (i < 2 or k != nums[i - 1] or k != nums[i - 2]) {
                nums[i] = k;
                i++;
            }
        }    
        return i;
    }
};
