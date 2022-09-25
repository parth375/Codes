class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,string>>v;
        for(int i=0;i<names.size();i++){
            v.push(make_pair(heights[i],names[i]));
        }
        vector<string>ans;
        while(!v.empty()){
            ans.push_back(v.top().second);
            v.pop();
        }
        return ans;
        
    }
};