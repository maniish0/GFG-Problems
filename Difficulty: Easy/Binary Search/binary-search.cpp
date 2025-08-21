class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0, high = arr.size() - 1;
        int ans = -1; // store smallest index if found
        
        while (low <= high) {
            int mid = low + (high - low) / 2; // safer than (low + high)/2
            
            if (arr[mid] == k) {
                ans = mid;      // record position
                high = mid - 1; // continue left to find smaller index
            }
            else if (arr[mid] < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans; // -1 if not found
    }
};

