#include<iostream>
#include <bits/stdc++.h>
using namespace std;
type long long ll;

ll N;
ll L[4000];

void input(){
    cin >> N;
    for(int i=0;i<=N;i++) cin >> L[N];
}

void solve(){
    input();
    vector<ll> v(N);
    for(int i=0;i<N;i++) v[i] = L[i+1]; //なんでi+1から代入しているのかわからない
    sort(v.begin(), v.end());

    ll ans = 0;

    for(ll mid=N-1;mid>=0;mid--){
        for(ll low=mid-1;low>=0;low--){
            auto itr = lower_bound(v.begin(), v.end(), v[mid]+v[low]); //v[mid]+v[low]より大きい中で一番小さいものを見つける
            //つまり、ここで2番目に長い棒を特定している
            ll ng = distance(itr, v.end()); //イテレータ間の距離を求める
            ans += (N - 1 - mid) - ng;
        }
    }
    cerr << v[mid] + v[low] << " " << ng << " " << (N-1-mid)-ng << endl;

    cout << ans << endl;
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();
    return 0;
}