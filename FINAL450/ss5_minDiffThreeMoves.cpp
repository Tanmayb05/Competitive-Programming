#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        int numsSize = nums.size();
        vector<int> ans; 
        
        if (numsSize>3) {
//         Declare nums1 and copy nums and sort nums1
        vector<int> nums1 = nums;
        sort(nums1.begin(), nums1.end());
//         Declare nums2 and copy nums and sort nums2
        vector<int> nums2 = nums;
        sort(nums2.begin(), nums2.end());
        
//         Make moves on last 3 elements
        for (int i=numsSize-3; i<numsSize; i++)
            nums1[i] = nums1[0];
//         Make moves on first 3 elements
        for (int i=0; i<3; i++)
            nums2[i] = nums2[numsSize-1];
            
//         Sorting respective vector int arrays
//         and pushing the difference between 
//         last and first elements in ans vector    
        sort(nums1.begin(), nums1.end());
        ans.push_back(nums1[numsSize-1] - nums1[0]);
        sort(nums2.begin(), nums2.end());
        ans.push_back(nums2[numsSize-1] - nums2[0]);

        sort(ans.begin(), ans.end());
        return ans[0];
        }
        else 
            return 0;
    }
            
//      20    75    81    82    95   
//         55    06    01    13
            
//      75    81    81    82    95   
//         06    01    01    13
};