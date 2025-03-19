'''
121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4
'''

class Solution:
    def maxProfit_slow(self, prices: list[int]) -> int:
        left=0
        right=1
        ans = 0
        while left<right and right!=len(prices) and left!=len(prices)-1:
            print(f"\nleft({left}:{prices[left]}) : right({right}:{prices[right]}) : ans({ans})")
            if prices[right]-prices[left]<0:
                left+=1
                right=left+1
            elif prices[right]-prices[left]>=0:
                ans = max(ans,prices[right]-prices[left])
                print(f"\nleft({left}:{prices[left]}) : right({right}:{prices[right]}) : ans({ans})")
                right+=1
        print(ans)
        return ans
    
    def maxProfit(self, prices):
        left, right = 0, 1
        ans = 0
        while right<len(prices):
            if prices[right] < prices[left]:
                left = right
            elif prices[right] - prices[left] > ans:
                ans = prices[right] - prices[left]
            right+=1
        return ans


# Entry point for script execution
if __name__ == "__main__":
    prices1 = [7,1,5,3,6,4]  # Sample input 1
    prices2 = [7,6,4,3,1]  # Sample input 2
    prices3 = [2,1,2,1,0,1,2]
    solution = Solution()
    solution.maxProfit(prices1)