class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size = nums.size();
        vector <int> result;
        int f, v, j;
        j = 0;
        if(size <= 1 and size > 100 and size%2 != 0){
            return nums;
        }
        
       
        result.resize(size); 
        int i = 0;
        while(i != size){
            if(nums[i] < 1 and nums[i] > 100){
                return nums;
            }
            
            f = nums[i];
            v = nums[i+1];
            
            while(f>0){
                result.resize(j+1);
                result[j] = v;
                j++;
                f = f-1;
            }
            
            
            i = i + 2;
            
        }
        
        result.resize(j);
        
        return result; 
        
    }
};