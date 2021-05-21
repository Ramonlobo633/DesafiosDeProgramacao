class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = 0;
        int size = nums.size();
        
        for(int i = 0; i < size; i++){
            if(nums[i] >= target){
                return result;
            }else{
                result = result + 1;
            }
            
        }
        
        return result;
    }
};