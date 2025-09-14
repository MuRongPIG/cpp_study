#include<bits/stdc++.h>
using namespace std;
int n;
bool light[1000000];
int main(){
    cin >> n;
    double a[n];
    
    int t[n];
    memset(light,0,sizeof(light));
    for(int i=0;i<n;i++){
        cin >> a[i] >> t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=t[i];j++){
            int b = (a[i] * j) / 1;
            if(light[b] == 0){
                light[b] = 1;
            }
            else if (light[b] == 1){
                light[b] = 0;
            }
            
        }
    }
    for(int i=0;i<1000000;i++){
        if(light[i] == 1){
            cout << i;
        }
    }
    return 0;
}