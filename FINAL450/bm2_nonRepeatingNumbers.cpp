// { Driver Code Starts
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> a) 
    {
        // Code here.
        int n = a.size();
        int temp = a[0];
        int x = 0;
        int y = 0;
        
        for(int i=1;i<n;i++)
        {
            temp = temp^a[i];                   //{1, 2, 3, 2, 1, 4}
        }
        
        int no = temp & ~(temp-1);
        
        for(int i=0;i<n;i++)
        {
            if(a[i]&no)x = x^a[i];
            else y = y^a[i];
        }
        vector <int> ans;
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends