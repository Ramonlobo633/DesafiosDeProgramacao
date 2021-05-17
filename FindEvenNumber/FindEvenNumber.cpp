class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int size = nums.size();
        
        if(size <= 1 and size >= 500){
            return 0;
        }
        
       
        int result = 0;
        int a = 0;
        int contaDigitos = 0;
        
        for(int i = 0; i < size; i++){
            if(nums[i] <= 1 and nums[i] >= 10 * 10 * 10 * 10 * 10){
                return 0;
            }
            
            a = nums[i];
            
            if (a == 0){
                contaDigitos = 1;
            }else{
                while (a != 0){
                    contaDigitos = contaDigitos + 1;
                    a = a / 10;
                 }
                 
                
            }
            
            if(contaDigitos%2==0){
                result++;
            }
            contaDigitos = 0;
        }
        
        return result;
    }
};