class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = - 1;
        
        while (low <= high) {
            
            int mid = low + (high-low) / 2;
            
            if(arr[mid] <= x){   // "<=" becouse lower bound me hume 
                                // " Largest number less than or equal to x" find krna h
               
               
                ans = mid;       // store candidate (arr[mid] is valid floor)
                
                low = mid + 1; // // but maybe there is a bigger value ≤ x on the right
            }
             else {
                 
                 high = mid - 1; // arr[mid] is too big
             }  
            
        }
        
        return ans;
        
        
    }
};

