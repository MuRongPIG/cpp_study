#include<bits/stdc++.h>
using namespace std;
int a,b,res=0,p;
int main(){
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        p=i;
        do{
            if(p % 10 == 2){
                res += 1;
            }
            p = p / 10;
        }while(p);
        
    }
    cout << res;
    return 0;
}