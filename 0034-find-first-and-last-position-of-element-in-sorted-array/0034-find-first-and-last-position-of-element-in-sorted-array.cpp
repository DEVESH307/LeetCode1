class Solution {
public:
    int firstOccurance(vector<int>& arr, int n, int x){
        int first = -1;
        int low = 0;
        int high = n-1;
        int mid;
        while(low <= high){
            mid = low+(high-low)/2;
            if(arr[mid] == x){
                first = mid;
                high = mid-1;
            }
            else if(arr[mid] < x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return first;
    }
    int lastOccurance(vector<int>& arr, int n, int x){
        int last = -1;
        int low = 0;
        int high = n-1;
        int mid;
        while(low <= high){
            mid = low+(high-low)/2;
            if(arr[mid] == x){
                last = mid;
                low = mid+1;
            }
            else if(arr[mid] < x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return last;   
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int _first = firstOccurance(nums, n, target);
        int _last = lastOccurance(nums, n, target);
        return {_first, _last};
    }
};