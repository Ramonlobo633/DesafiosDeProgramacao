class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result = 0, i = 0, opt;
        int size = items.size();
        
        if(ruleKey == "type"){
            opt = 0;
        }else if(ruleKey == "color"){
            opt = 1;
        }else if(ruleKey == "name"){
            opt = 2;
        }else{
            return 0;
        }
        
        while(i != size){
            if(items[i][opt] == ruleValue){
                result++;
            }
            i++;
        }
        
        return result;
    }
};