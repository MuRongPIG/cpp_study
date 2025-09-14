#include<bits/stdc++.h>
using namespace std;
int arr[10];
int height,cnt=0;
int main(){
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    cin >> height;
    for(int i=0;i<10;i++){
        if(height + 30 >= arr[i]){
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}