#include <iostream>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.front() == target) return 0;
        if(nums.back() == target) return nums.size() - 1;
        int size = nums.size();
        int pivot = pivotSize(nums);
        if(nums[0] <= target && pivot >= 0) return binarySearch(nums,target,0,pivot);
        return binarySearch(nums,target,pivot+1,size-1);
    }
    int binarySearch(vector<int>& nums,int target, int low, int high) {
        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
    int pivotSize(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        while(high > low) {
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]) low = mid + 1;
            else high = mid;
        }
        return low - 1;
    }
};

int main() {
    Solution s;
    
}