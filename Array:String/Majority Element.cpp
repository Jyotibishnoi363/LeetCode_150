class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        if(n == 0) return 0; 
        if(n == 1) return nums[0];
        int prev = nums[0]; 
        int curr = 0; 


        for(int i=0; i<n; i++) {
            if(nums[i] == prev) {
                curr++; 
            } else {
                if(curr > n/2) {
                    return prev; 
                }
                prev = nums[i]; 
                curr = 1;
            }
        }

        return prev;
    }
};