#include<iostream>
#include<string>    // Line 14 : to_string()
#include<bitset>    // Line 14 : bitset<>()
#include<algorithm> // Line 14 : reverse()
#include<vector>    // Line 17 : vector<int>

using namespace std;

int copySetBits(int x, int y, int l, int r) {

    // Converting the decimals x & y into binary strings.
    // And then reversing the binary strings.
    // reverse(itr, itr) function belongs to <algorithm>.
    string xb = bitset<32>(x).to_string();  reverse(xb.begin(), xb.end());
    string yb = bitset<32>(y).to_string();  reverse(yb.begin(), yb.end());
    // Initializing vector a which is used to store the index of SetBits to copy.
    vector<int> a;

    
    // Storing Indices of yb binary string which has SetBits.
    for (int i=l-1; i<r; i++) {
        if (yb[i] == '1')
            a.push_back(i);
    }

    // Printing the Indices of yb binary string which has SetBits.
    for (int i=0; i<a.size(); i++)
        cout<<"a["<<i<<"] = "<<a[i]<<endl;

    
    // Printing Strings
    cout<<"xb = "<<xb<<endl;
    cout<<"yb = "<<yb<<endl;
    cout<<"l  = "<<l<<endl;
    cout<<"r  = "<<r<<endl;

    
    // Copying SetBits of yb to xb.
    for (int i=0; i<a.size(); i++)
        xb[a[i]] = '1';

    // Printing xb to get the desired binary string.
    cout<<"xb = "<<xb<<endl;

    // Reversing the desired binary string 
    // using reverse function from <algorithm>.
    reverse(xb.begin(), xb.end());
    
    // Printing the Reversed Binary String.
    cout<<"xb = "<<xb<<endl;
    
    
    // Converting Binary String to Integer Decimal.
    // And Storing it in ans int variable.
    int ans = stoi(xb,0,2);

    return ans;
}

int main() {
    int x, y, l, r;
    cin>>x>>y>>l>>r;

    int ans = copySetBits(x, y, l, r);
    cout<<endl<<ans;

    return 0;
}

/*
_____________________________________________________________________________________________
| Q. Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32.                    |  
|    The task is consider set bits of y in range [l, r] and set these bits in x also.        |    
|    Examples :                                                                              |      
|         Input  : x = 10, y = 13, l = 2, r = 3                                              |   
|         Output : x = 14                                                                    |     
|         Binary representation of 10 is 1010 and that of y is 1101.                         |        
|         There is one set bit in y at 3’rd position (in given range).                       |                     
|         After we copy this bit to x, x becomes 1110 which is binary representation of 14.  |      
|                                                                                            |     
|         Input  : x = 8, y = 7, l = 1, r = 2                                                |       
|         Output : x = 11                                                                    |          
|____________________________________________________________________________________________|       

___________________________________________________
| ::SAMPLE INPUTS + OUTPUTS::                     |
|-------------------------------------------------|
| 1) 10 13 2 3        -> 14                       |
| 2) 8 7 1 2          -> 11                       |
|                                                 |
|-------------------------------------------------|
| ::EXECUTION::                                   |
|-------------------------------------------------|
| 10 13 2 3                                       |
| a[0] = 2                                        |
| yb = 10110000000000000000000000000000           |
| l  = 2                                          |
| r  = 3                                          |
| xb = 01110000000000000000000000000000           |
| xb = 00000000000000000000000000001110           |
| 14                                              |
|                                                 |
|-------------------------------------------------|
| 8 7 1 2                                         |
| a[0] = 0                                        |
| a[1] = 1                                        |
| xb = 00010000000000000000000000000000           |
| yb = 11100000000000000000000000000000           |
| l  = 1                                          |
| r  = 2                                          |
| xb = 11010000000000000000000000000000           |
| xb = 00000000000000000000000000001011           |
| 11                                              |
|_________________________________________________|

*/