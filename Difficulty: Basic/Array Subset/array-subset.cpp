class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        int n = a.size(), m = b.size();

        while (i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
                j++; // move both if match
            } 
            else if (a[i] < b[j]) {
                i++; // try next element in a
            } 
            else {
                return false; // b[j] not found in a
            }
        }
        return (j == m); // true if all b[] elements matched
    }
};
