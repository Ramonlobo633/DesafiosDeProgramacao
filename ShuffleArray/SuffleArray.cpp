class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector <int> suffle;
        int size = n*2;
        int teste = nums.size();
        int j = size/2;
        int a = 1; 
        
        if(n <= 1 and n >= 500 and  teste != size){
            return nums;
        }
        
       
        
        suffle.resize(size);
        
        suffle[0] = nums[0];
        for(int i = 1; i < size; i++){
            if(nums[i] <= 1 and nums[i] >= 10 * 10 * 10){
                return nums;
            }
            if(i%2==0){
                suffle[i] = nums[a];
                a++;
            }else{
                suffle[i] = nums[j];
                j++;
            }
        }
        
        
        return suffle;
    }
};