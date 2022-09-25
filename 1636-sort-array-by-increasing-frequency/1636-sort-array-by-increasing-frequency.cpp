class Solution {
    private:
    static bool compare(pair<int,int>p1, pair<int,int>p2){
        
        if(p1.first==p2.first)
            return p1.second>p2.second;
        return p1.first<p2.first;
    }
public:
   vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
       vector<int>ans;
       sort(v.begin(),v.end(),compare);
       for(auto it:v){
           int len=it.first;
           while(len--){
           ans.push_back(it.second);
           }
       }
        return ans;
    }
};