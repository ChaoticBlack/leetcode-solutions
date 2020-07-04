class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        //bool dup;
        int n = nums.size();
       // for(int i=0;i<n;i++)
        //    cout<<nums[i];
        for(int i =0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};
