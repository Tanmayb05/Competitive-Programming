'''
3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without duplicate characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:
0 <= s.length <= 5 * 10^4
s consists of English letters, digits, symbols and spaces.

'''
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans = 0
        left = 0
        char_set = set()
        for right,x in enumerate(s):
            while x in char_set:
                char_set.remove(s[left])
                left+=1
            char_set.add(x)
            ans = max(ans,right - left + 1)
        print(ans)
        return ans

# Entry point for script execution
if __name__ == "__main__":
    string1 = "abcabcbb"  # Sample input 1
    string2 = "bbbbb"  # Sample input 2
    string3 = "pwwkew" # Sample input 3
    solution = Solution()
    solution.lengthOfLongestSubstring(string3)