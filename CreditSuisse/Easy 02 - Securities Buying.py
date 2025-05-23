'''
Securities buying
Harry has just started investing in stock markets. There are a variety of securities that he can buy, but he is a bit confused about buying the securities because he has a limited amount of money. The prices of the various securities are given for N days and security_value[k] denotes the price of the security on the kth day. There is one more rule, Harry can buy at most k number of securities on the kth day. As mentioned earlier, Harry has a limited amount of money with him to buy these securities and this amount is denoted by z. Can you guide Harry in finding the maximum number of securities that he can buy?

Constraints:
All the security prices given in the security_value array are positive integers.

1<=security_value[k]<=50
10<=length of array security_value<=50
Input Format:
The first line contains an integer z denoting the limited amount which Harry has with him.
The second line contains an array named security_value consisting of the prices of various securities on N different days.
Output Format:
An integer denoting maximum number of securities which Harry can buy with that limited amount(which is denoted by z).
Do not print Debug Statements while submitting the solution.

Examples:

Example 1:
Input:
45
10 7 19
Output:
4
Explanation:
Harry can buy: 
1 security of $10 + 2 securities of $7 + 1 security of $19, which would cost him $43 in total. And $43 < $45(z value).
Hence total no. of securities he can purchase = 4


Example 2:
Input:
64
17 24 7 45 15 14 37 40 8 23 27 17
Output: 
8
'''

def securitiesBuying(z, security_value):
    no_of_stocks=0   
    total = 0
    #participants code here

    while(total <= z):
        i=0
        minValue = min(security_value)
        minIndex = security_value.index(minValue)+1
        
        while( (total <= z) and (i < minIndex) ):
            total = total + minValue; i+=1; no_of_stocks+=1
            
        security_value[minIndex-1] = 51
        
    return no_of_stocks-1;


def main():
    z= int(input().split()[0])
    security_value = list(map(int,input().split()))
    no_of_stocks_purchased=securitiesBuying(z,security_value)
    print(no_of_stocks_purchased)
    zzz = input()



if __name__ == '__main__':
    main()
