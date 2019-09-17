#include<iostream>
#include <bits/stdc++.h>
#include <array>
#include <vector>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, L;
    cin >> N >> L;
    vector<string> iroha(N);
    for(int i=0;i<N;i++){
        cin >> iroha[i];
    }
    sort(iroha.begin(), iroha.end());
    string ans;
    for(int i=0;i<N;i++){
        ans += iroha[i];
    }
    cout << ans << endl;
}