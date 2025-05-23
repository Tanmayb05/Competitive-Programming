'''
567. Permutation in String (Medium)

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.

Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

Example 2:
Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 
Constraints:
1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.
'''
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        left = 0
        right = 0
        s1_list = list(s1)
        while right<len(s2) or len(s1_list)>0:
            if len(s1) == 0:
                return True
            print(f"s2[right]: {s2[right]}")
            if s2[right] in s1_list:
                s1_list.remove(s2[right])
                right+=1
            elif s2[right] not in s1_list:
                right += 1
                left = right
                s1_list=list(s1)
        return False


# Entry point for script execution
if __name__ == "__main__":
    a1, a2 = "ab", "eidbaooo"
    b1, b2 = "ab", "eidboaoo"
    solution = Solution()
    solution.checkInclusion(a1,a2)
