class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    
        vector <int> acc;
        
        int n = nums.size();
        
        acc.resize(n);
        
        
        acc[0] = nums[0];
        
        for(int i = 1; i < n; i++){
            acc[i] = acc[i-1] + nums[i];
        }
        
        
        return acc;
        
        
    }
};

