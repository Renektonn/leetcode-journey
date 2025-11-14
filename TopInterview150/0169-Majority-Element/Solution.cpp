/*
Boyer–Moore majority vote algorithm
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int major = 1e9 + 1, cnt = 0;
        for (int num : nums) {
            if (num == major){
                cnt++;
            } else {
                if (cnt) {
                    cnt--;
                } else {
                    cnt = 1;
                    major = num;
                }
            }
        }
        return major;
    }
};
