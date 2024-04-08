class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size(); 
        if(n <= 2) return n; 

        int idx = 2; 

        for(int k =2; k<n ; k++) {
            if(nums[k] != nums[idx-2]) {
               nums[idx] = nums[k];
               idx++;
            }
        }

        return idx;
    }
};