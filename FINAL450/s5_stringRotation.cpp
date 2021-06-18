#include<iostream>
using namespace std;

void areRotations(string str1,string str2) {
    string temp = str1+str1;
    if(str1.size() != str2.size()){
        cout<<"str2 is a not rotation of str1";
    }
    else{
            size_t found = temp.find(str2);
            // cout<<found;
        if (found != string::npos)
            cout << "str2 is a rotation of str1 "<< endl;
        else
            cout<<"str2 is a not rotation of str1";
        }
}
int main()
{
    string str1 = "ABCDE";
    string str2 = "CDEAB";
    areRotations(str1, str2);
    return 0;
}