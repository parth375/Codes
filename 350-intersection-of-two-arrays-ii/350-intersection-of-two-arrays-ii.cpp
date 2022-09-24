class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums2.size();
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    swap(nums2[j],nums2[n-1]);
                    n--;
                    break;
                }
            }
        }
        return ans;
    }
};