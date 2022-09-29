class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
       int n=nums.size();
    sort(nums.begin(),nums.end());
    if(nums[n-1]-nums[0]<=k){
        return 1;
    }
   
        int cnt=1;
        int min=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]-min>k){
                cnt++;
                min=nums[i];
            }
        }
       return cnt;
    
    }
};