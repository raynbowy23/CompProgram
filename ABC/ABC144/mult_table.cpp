#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#define rep(i, n) for (int i=0;i<n;i++);
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;
    ll result = N - 1;
    for(ll i=1;i<=sqrt(N);i++){
        if(N%i == 0){
            result = min(result, i + (N/i) - 2);
        }
    }
    cout << result << endl;
}