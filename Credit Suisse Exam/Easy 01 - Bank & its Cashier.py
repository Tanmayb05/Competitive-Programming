import math
def sol(n):
   #add code here
    if n==0:
        return 0
    if n>0 and n<1000000000:
        ans = n/3
        floor_ans = math.floor(n/3)
        if math.floor(n/3) == ans:
            return 2*floor_ans
        else:
            return 2*floor_ans + 1

# do not edit below code
def main():
    n=int(input())
    print(sol(n))
    zzz=input()

if __name__ == '__main__':
    main()


'''
Input1: 1000
Output1: 667

Input2: 1
Output2: 1

Input3: 32
Output3: 21
'''