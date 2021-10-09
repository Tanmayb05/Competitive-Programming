#!/bin/python3

import math
import os
import random
import re
import sys

def portfolio_profit_maximisation(maxSum, a, b):
    # Write your code here
    sum = 0;    count=0;    i=0;        j=0
    while (sum <= maxSum):
        if i<n and j<m:
            if a[i]<b[j]:
                sum = sum + a[i];   i+=1
            else:
                sum = sum + b[j];   j+=1
        elif i>=n and j<m:
            sum = sum + b[j];   j+=1
        elif i<n and j>=m:
            sum = sum + a[i];   i+=1
        else:
            return count
        count+=1
    return count-1
    

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()
    n = int(first_multiple_input[0])
    m = int(first_multiple_input[1])
    maxSum = int(first_multiple_input[2])
    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))

    result = portfolio_profit_maximisation(maxSum, a, b)

    print(result)


'''
Input1:
5 4 10
4 2 4 6 1
2 1 8 5
Output2:
4

Input2:
3 7 3696
12 21 102
167 244 377 56 235 269 23
Output2:
10
'''