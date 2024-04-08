class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(); 
        if(n < 2) return n;

        int i = 0;

        for(int k=1; k<n; k++) {
            if(nums[i] != nums[k]) {
                i++;
                nums[i] = nums[k];
            }
        }

        return i+1;
    }
};