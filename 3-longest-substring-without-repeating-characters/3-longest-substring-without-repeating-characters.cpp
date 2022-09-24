class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1){
            return 1;
        }
        if(s.size()==0){
            return 0;
        }
        queue<char>q;
        map<char,int>mp;
        int mx=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                int len=q.size();
                mx=max(mx,len);
                while(q.front()!=s[i]){
                    cout<<q.front()<<" ";
                    mp[q.front()]--;
                    q.pop();
                }
                mp[q.front()]--;
                q.pop();
            }
            
            q.push(s[i]);
        }
        int siz=q.size();
        mx=max(mx,siz);
        return mx;
    }
};