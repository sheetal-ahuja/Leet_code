class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//-------------------------------------------------------------------------------
//This code is done by a normal nested loop approach with time complexity O(n²)
//-------------------------------------------------------------------------------
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(target == nums[i]+nums[j])
                {
                    return {i, j};
                }
            }
        }
        return {};

//-----------------------------------------------------------------------------
//This code uses map using which we can reduce complexity to O(n)
//-----------------------------------------------------------------------------
        int n = nums.size();
        map<int, int> mp;

        for(int i =0; i<n;i++)
        {
            int remaining = target- nums[i];

            if(mp.find(remaining)!= mp.end()){
                return {mp[remaining], i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }

};
