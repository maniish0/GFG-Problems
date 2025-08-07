class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;

        int largest = -1;
        int second = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            } else if (arr[i] != largest && arr[i] > second) {
                second = arr[i];
            }
        }

        return (second == -1) ? -1 : second;
    }
};
