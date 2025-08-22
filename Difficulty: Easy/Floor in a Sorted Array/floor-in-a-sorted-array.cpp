class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = -1; // if no floor exists

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= x) {
                ans = mid;      // possible floor
                low = mid + 1;  // move right to find last occurrence
            } else {
                high = mid - 1; // move left
            }
        }

        return ans;
    }
};

