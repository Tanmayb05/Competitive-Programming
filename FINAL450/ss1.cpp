// { Driver Code Starts
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// # define n 1000000;
vector<int> find(int a[], int n , int x );

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> b;
    int counter=0;
    int start_position;
    for (int i=0; i<n; i++) {
        if (arr[i] == x) {
            
            if (start_position == -1)
                start_position = i;
            else
                counter++;
        }
    }
    b.push_back(start_position);
    b.push_back(start_position+counter);

    return b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}