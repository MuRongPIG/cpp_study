#include<bits/stdc++.h>
using namespace std;
int all[14];
int day=0,hour=8;
int main(){
    for(int i=0;i<14;i++){
       cin >> all[i];
    }
    for(int i=0;i<14;i+=2){
        if(all[i]+all[i+1]>hour){
            hour = all[i]+all[i+1];
            day = i / 2 + 1;
        }
    }
    cout << day;
    return 0;
}