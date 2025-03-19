'''
2401. Longest Nice Subarray

You are given an array nums consisting of positive integers.
We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.
Return the length of the longest nice subarray.
A subarray is a contiguous part of an array.
Note that subarrays of length 1 are always considered nice.

 

Example 1:
Input: nums = [1,3,8,48,10]
Output: 3
Explanation: The longest nice subarray is [3,8,48]. This subarray satisfies the conditions:
- 3 AND 8 = 0.
- 3 AND 48 = 0.
- 8 AND 48 = 0.
It can be proven that no longer nice subarray can be obtained, so we return 3.

Example 2:
Input: nums = [3,1,5,11,13]
Output: 1
Explanation: The length of the longest nice subarray is 1. Any subarray of length 1 can be chosen.
 

Constraints:
1 <= nums.length <= 105
1 <= nums[i] <= 109

'''
class Solution:
    def longestNiceSubarray(self, nums: list[int]) -> int:
        # MAIN Logic:
        # Use bitwise OR when the bitwise AND answer is 0.
        # Basically to add the AND-0 element to answer
        # Use bitwise XOR when the bitwise AND answer is 1.
        # Basically to remove the AND-1 element from answer

        left = 0  # Left index for sliding window
        ans = 0 
        bitsUnion = 0  # Tracks bitwise OR result within the window

        # Iterate through the array with right pointer
        for right, x in enumerate(nums):
            print(f"\nleft:{left} :: right:{right} :: x:{x}")

            # Shrink window while there's a bitwise conflict
            while left < right and (bitsUnion & x) != 0: 
                print(f"BadCase: bitsUnion({bitsUnion}) & x({x}) = 1")
                bitsUnion ^= nums[left]  # Remove left element
                left += 1  # Move left pointer

            print(f"HappyCase: bitsUnion({bitsUnion}) & x({x}) = 0")
            bitsUnion |= x  # Add current element to bitsUnion

            # Track the maximum subarray length
            ans = max(ans, right - left + 1)
            print(f"Current ans: {ans}")

            # Display current window for reference
            window = {i: nums[i] for i in range(left, right + 1)}
            print(f"Current Window: {window}")

        print(f"\nLongest Nice Subarray Length: {ans}")
        return ans

# Entry point for script execution
if __name__ == "__main__":
    nums1 = [1, 3, 8, 48, 10]  # Sample input 1
    nums2 = [3, 1, 5, 11, 13]  # Sample input 2
    solution = Solution()
    solution.longestNiceSubarray(nums1)
    print("\n\n\n\n")
    solution.longestNiceSubarray(nums2)