#include<iostream>
#include<map>
using namespace std;

void printDups(string str)
{
    map<char,int> ans;

    for(int i=0; i<str.size(); i++) {
        ans[str[i]]++;
    }

    for(auto i : ans) {
        if (i.second>1) {
            cout<<i.first<<" = "<<i.second<<endl;
        }
    }
}

int main()
{
    string str = "Wabba lubba Dub Dub";
    printDups(str);
    return 0;
}