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


'''
Input1: 
45
10 7 19
Output1:
4

Input2:
64
17 24 7 45 15 14 37 40 8 23 27 17
Output2:
8
'''