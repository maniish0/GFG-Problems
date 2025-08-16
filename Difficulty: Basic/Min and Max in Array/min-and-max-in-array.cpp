// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
    
        int mini = arr[0];
        int maxi = arr[n-1];
        
       return make_pair(mini,maxi);
    }
      
};