class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k > 30000)  return false;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums.size();

         map<int, int> m;
         for(int i=0;i<n;i++)
         {
             if(m.find(nums[i])!=m.end())
             {
                 if(abs(m[nums[i]]-i)<=k)
                     return true;
                 else
                     m[nums[i]]=i;
             }
             else
                 m[nums[i]]=i;
         }
        return false;
    }
};
