// { Driver Code Starts
#include <iostream>

using namespace std;

 // } Driver Code Ends
class Solution{
public:

    int *findTwoElement(int *arr, int n) {
        
        int ans[2] = {-5,-5};
        
        int copy[n];
        for(int i=0; i<n; i++) {
            copy[i] = -1;
            cout<<"i="<<i<<" copy[i]="<<copy[i]<<endl;
        }
        
        for(int i=0; i<n; i++) {
            
            if ( copy[ (arr[i]-1) ] == -1 ) {
                cout<<"copy[ (arr[i]-1) ] {"<<copy[ (arr[i]-1) ]<<"} = arr[i]{"<<arr[i]<<"}"<<endl;
                copy[ (arr[i]-1) ] = arr[i];
                cout<<"copy[ (arr[i]-1) ] {"<<copy[ (arr[i]-1) ]<<"} = arr[i]{"<<arr[i]<<"}"<<endl;
                cout<<"-----\t-----\t-----\n";
            }
            else {
                cout<<"ans[0] { "<<ans[0]<<" }  = arr[i] { "<<arr[i]<<" }"<<endl;
                ans[0] = arr[i];
                cout<<"-----\t-----\t-----\n";
            }
        }
        
        for(int i=0; i<n; i++) {
            
            if (copy[i] == -1) {
                cout<<"i+1 = "<<i+1<<endl;
                ans[1] = i+1;
                break;
            }
        }
        return ans;    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends