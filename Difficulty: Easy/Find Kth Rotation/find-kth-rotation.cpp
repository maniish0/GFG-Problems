class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            // Case 1: Subarray is already sorted
            if (arr[low] <= arr[high]) {
                return low;  // smallest element at index low
            }

            int mid = (low + high) / 2;
            int next = (mid + 1) % n;
            int prev = (mid - 1 + n) % n;

            // Case 2: Check if mid is the smallest element (pivot)
            if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
                return mid;
            }

            // Case 3: Left half is sorted, so pivot must be in right half
            if (arr[mid] >= arr[low]) {
                low = mid + 1;
            }
            // Case 4: Right half is sorted, so pivot must be in left half
            else {
                high = mid - 1;
            }
        }

        return 0; // fallback, though function will always return earlier
    }
};
