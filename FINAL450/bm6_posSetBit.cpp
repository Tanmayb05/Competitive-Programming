// { Driver Code Starts
#include<iostream>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int a[50], i=0, count=0;

        for(i=0; N>0; i++)  {
            a[i] = N%2;    N = N/2;  
        } 
        int j = i;
        int pos = 0;
        for(i=0; i<j; i++) {
            if(a[i] == 1) {
                count++;
                pos=i;
            }
        }
        if(count!=1)
            return -1;
        else
            return pos+1;

    //To show the binary number    
    /*
        int j=i-1;

        for(i=i-1 ;i>=0 ;i--)    
            cout<<a[i];    
        cout<<endl;

        for(j=i; j>=0; j--) {
            if(a[j] == 1)
                count++;
        }
    */
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends
