class Solution {
  public:
  
  
  
    // Recursive function to perform Bubble Sort
    void bubbleSortRecursive(vector<int>& arr, int n) {
        // Base case: If array size is 1 or less, it's already sorted
        if (n == 1)
            return;

        // One pass of bubble sort to push the largest element to the end
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }

        // Recursive call for the remaining array (excluding the last sorted element)
        bubbleSortRecursive(arr, n - 1);
    }

    // Main function to be called
    void bubbleSort(vector<int>& arr) {
        bubbleSortRecursive(arr, arr.size());
    }
};