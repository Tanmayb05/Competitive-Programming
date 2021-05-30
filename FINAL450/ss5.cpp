#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        int s = nums.size();
        cout<<s<<endl;
        if (s>3) {
            vector<int> diff;
            sort(nums.begin(), nums.end());

            cout<<"nums \t= ";
            for (int i=0; i<s; i++) {
                cout<<nums[i]<<" ";
            }
            cout<<endl;

            cout<<"diff added = ";
            for (int i=1; i<s; i++) {
                cout<<(nums[i] - nums[i-1])<<" ";
                diff.push_back(nums[i] - nums[i-1]);
            }
            cout<<endl<<endl;

            for (int j=0; j<3; j++) {
                int min = *min_element(diff.begin(), diff.end());
                cout<<"min = "<<min<<" ";
                int fMin = getIndex(diff,min);
                cout<<"minIndex = "<<fMin<<" ";
                int max = *max_element(diff.begin(), diff.end());
                cout<<"max = "<<max<<" ";
                int fMax = getIndex(diff,max);
                cout<<"maxIndex = "<<fMax<<endl;

                if ((fMax+1) > (s/2))
                    nums[fMax+1] = nums[fMin];
                else
                    nums[fMax] = nums[fMin];

                sort(nums.begin(), nums.end());
                
                cout<<"nums \t= ";
                for (int i=0; i<s; i++) {
                    cout<<nums[i]<<" ";
                }
                cout<<endl;

                diff.clear();
                cout<<"diff added = ";
                for (int i=1; i<s; i++) {
                    cout<<(nums[i] - nums[i-1])<<" ";
                    diff.push_back(nums[i] - nums[i-1]);
                }
                cout<<endl<<endl;
            }
            return -3;
        }
        else 
            return 0;
    }
    
    int getIndex(vector<int> v, int K) {
        
        auto it = find(v.begin(), v.end(), K);

        // If element was found
        if (it != v.end())  {
            int index = it - v.begin();
            return index;
        }
        else 
            return -1;
    }
        
//      20    75    81    82    95   
//         55    06    01    13
            
//      75    81    81    82    95   
//         06    00    01    13

//      75    81    81    82    95   
//         06    00    01    13
};

int main() {
    Solution s;
    vector<int> nums = {448,433,498,103,81,537,995,376,286,737,132,702,740,446,811,709,578,534,821,730,216,1,344,192,645};
    int min = s.minDifference(nums);
    cout<<endl<<min;
}