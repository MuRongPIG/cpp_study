#include<bits/stdc++.h>
using namespace std;
int n,k,u=0,res=0; //n可抽的烟 u烟头

int main() {
    cin >> n >> k;
    res += n;
    u +=n;
    n=0;
 //第一次全部抽完
    while(u / k){
        n += u / k;
        u -= k * (u / k);//换烟
        res += n;
        u +=n;
        n=0;
        
    }
    cout << res;
    return 0;
}