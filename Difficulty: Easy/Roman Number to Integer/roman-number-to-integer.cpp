class Solution {
public:
    int romanToDecimal(string &str) {
        // Map to store values of Roman symbols
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int n = str.length();

        for (int i = 0; i < n; i++) {
            // If current value is less than next value, subtract it
            if (i + 1 < n && roman[str[i]] < roman[str[i + 1]]) {
                total -= roman[str[i]];
            } else {
                total += roman[str[i]];
            }
        }

        return total;
    }
};
