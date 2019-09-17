#include<iostream>
#include <bits/stdc++.h>
#include <array>
#include <vector>
#include <string>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s; cin >> s;

    string ans;
    for(auto c : s){
        if('0' == c) ans.push_back('0');
        if('1' == c) ans.push_back('1');
        if('B' == c){
            if(ans.size() == 0) continue;
            ans.pop_back();
        }
    }
    cout << ans << endl;
}