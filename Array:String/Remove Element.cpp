class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        int count =0;
        for(int i=0; i<n;i++) {
            if(nums[i] == val) {
                count++;
            }
        }
        int k = n-1;
        for(int i=0; i<n-count; i++) {
            if(nums[i] == val) {
                int temp = nums[k];
                nums[k] = nums[i];
                nums[i] = temp;
                k--;
            }
        }

        int j=0;
          for(int i=0; i<n; i++) {
            if(nums[i] != val) {
                j++;
            } else {
                break;
            }
          }

          return j;

    }
};