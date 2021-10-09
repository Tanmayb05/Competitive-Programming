#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> fourSum (vector<int> &arr, int k) {
    
}

void print (vector<int> &arr, string header) {

    cout << header << " => ";
    for (auto x : arr)
        cout << x << " ";
}

int main () {

    int n=7, k=23;
    vector<int> a{10,2,3,4,5,7,8};
    
    sort(a.begin(), a.end());

    print(a, "Sorted a");
    vector<vector <int>> ans = fourSum( a, k);    

}
