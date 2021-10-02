#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        map<int, int> m;
        vector<int> ans;
        cout << nums[1];
        int l = nums.size();
        for (i = 0; i < l; i++){
            if (m[target - nums[i]] != 0){
                ans.push_back(m[target - nums[i]] - 1);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]] = i + 1;
        }
        return ans;
    }
};
