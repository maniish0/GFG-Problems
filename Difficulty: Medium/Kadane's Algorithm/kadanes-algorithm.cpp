class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
    int curSum =0,maxSum =INT_MIN;
    
    for(int val : arr){
        curSum += val;
        maxSum =max(curSum,maxSum);
        
        if(curSum < 0){
            curSum = 0;
        }
    }
    return maxSum;
        
    }
};