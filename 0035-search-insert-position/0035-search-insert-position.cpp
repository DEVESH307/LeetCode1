class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        int mid;
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            else if(nums[mid] < target){
                ans = mid+1;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};