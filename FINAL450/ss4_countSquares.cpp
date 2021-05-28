// { Driver Code Starts

#include <iostream>
#include <cmath>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int countSquares(int N) {
        // code here
        float ans = sqrt(N);
        int x = ans;
        
        if (ans == 0 || ans == 1)
            return 0;
        cout<<ans<<" "<<x<<" "<<ans-x<<endl;
        if ( (N-x) > 0)
            return ans-1;
        else
            return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends