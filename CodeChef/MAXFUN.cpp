#include <iostream>
#include <list>
#include <cstdlib>
#include <algorithm>
using namespace std;

void printList(list<int> maxfun) {
    for (list<int>::iterator i=maxfun.begin(); i!=maxfun.end(); i++) 
       cout << *i << " ";
}

int main(){
    int lst[3] = {2,7,5};
    list<int> maxfun;
 
    for(int i=0;i<3;i++) {
        // cout<<i<<" ";
        for(int j=1;j<3;j++) {
            // cout<<j<<" ";
            for(int k=2;k<3;k++) {
                // cout<<k<<" ";

                int op[3] = {lst[i],lst[j],lst[k]};
                maxfun.push_back((op[0]-op[1]) + abs(op[1]-op[2]) + abs(op[2]-op[0]));
                // printList(maxfun);
            }
        }
    }

    int *i = std::max_element(maxfun,maxfun+12);
    cout<<char(*i)<<endl;
    return 0;
}