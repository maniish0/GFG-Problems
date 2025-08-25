class Solution {
  public:
    // Custom lower_bound implementation
    int lowerBound(vector<int>& arr, int target) {
        int low = 0, high = arr.size();
        while (low < high) {
            int mid = (low + high) / 2;
            if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }

    // Custom upper_bound implementation
    int upperBound(vector<int>& arr, int target) {
        int low = 0, high = arr.size();
        while (low < high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }

    // Function to count frequency of target
    int countFreq(vector<int>& arr, int target) {
        int lb = lowerBound(arr, target);
        int ub = upperBound(arr, target);
        return ub - lb;
    }
};
