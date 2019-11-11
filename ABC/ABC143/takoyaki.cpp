#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    int x; int y;

    cin >> N;
    int d[N];
    // vector<int> d(n);
    for(int i=0; i<N; i++) cin >> d[i];

    int total = 0;

    for(int i=0;i<N;i++){
        for(int j=i+1; j<N; j++){
            total += d[i] * d[j];
        }
    }
    cout << total;
}