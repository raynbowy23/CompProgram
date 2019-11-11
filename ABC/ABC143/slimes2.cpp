#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
string S;

void solve(){
    cin >> N >> S;
    S.erase(unique(S.begin(), S.end()), S.end());
    cout << S.size() << endl;
    return;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();
    return 0;
}