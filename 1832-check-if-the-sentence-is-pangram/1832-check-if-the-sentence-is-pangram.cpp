class Solution {
public:
    bool checkIfPangram(string sentence) {
       map<char,int>mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]++;
        }
        if(mp.size()<26){
            return false;
        }
        char c='a';
        for(auto it:mp){
            if(c!=it.first){
                return false;
            }
           c++;
        }
        return true;
        
    }
};