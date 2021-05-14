class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
        vector <bool> res;
        
        int maximum = *max_element( candies.begin(), candies.end() );
        
        
        for(int x : candies){
            if( x + extraCandies >= maximum){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        
        
        return res;
        
    }
};

