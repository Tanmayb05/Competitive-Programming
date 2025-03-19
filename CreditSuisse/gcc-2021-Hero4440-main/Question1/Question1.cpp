using namespace std;
#include <string>
#include <iostream>
#include <cmath>
int solution(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
    return 0;
    }
      else if(n%3==0){
      n = n/3;
      return n*2;
    }
    else{
    n = round(n/3);
	return(n+n+1 );
    }
}
/*  Do not edit below code */
int main() {
	int n;
	cin >> n;	
    int answer=solution(n);
	cout << answer << endl;	
}