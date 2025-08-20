
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Step 1: Count frequencies
        for (int num : arr) {
            freq[num]++;
        }

        // Step 2: Find the first element with frequency = 1
        for (int num : arr) {
            if (freq[num] == 1) {
                return num;
            }
        }

        // Step 3: If no non-repeating element
        return 0;
    }
};
