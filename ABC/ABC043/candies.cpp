#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int ans = 0;
    for(int i=0;i<N;i++){
        ans += i;
    }
    cout << ans;
}