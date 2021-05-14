class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    
        int number_customers = accounts.size();
        int number_banks     = accounts[0].size();
        
        
        int maximum_wealth = 0;
        
        for(int i = 0; i < number_customers; i++){
            
            int wealth = accumulate( accounts[i].begin(), accounts[i].end(), 0);
            
            //cout << wealth << endl;
            
            maximum_wealth = max( maximum_wealth, wealth );
        }
        
        
        return maximum_wealth;
        
        
        
        
        
        
        
    }
};

