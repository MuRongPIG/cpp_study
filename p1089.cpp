#include<bits/stdc++.h>
using namespace std;
int budget[12];
int money=300;
float save=0.0;
int main(){
    for(int i=0;i<12;i++){
        cin >> budget[i];
    }
    for(int i=0;i<12;i++){
        save += (money - budget[i]) - (money - budget[i]) % 100;
        money -= (budget[i] + ((money - budget[i]) - (money - budget[i]) % 100));
        if(money<0){
            cout << i * (-1) - 1;
            return 0;
        }
        money += 300;
    }
    money -= 300;
    cout << (save * 1.2 + money);
    return 0;
}