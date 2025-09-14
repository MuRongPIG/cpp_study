#include <bits/stdc++.h>
using namespace std;
int k;
long double a=0.0;
int main(){

    cin >> k;
    for(int i=1;i<=1835423;i++){
        if(a>k){
            cout << i-1;
            break;
        }
        a +=1.0/i;
    }
    return 0;
}