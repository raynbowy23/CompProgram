#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // int N;
    int N;
    string S;
    cin >> N >> S;
    // for(int i=0;i<N;i++) cin >> S[i];
    S.push_back('#');

    int slime_num = 0;
    // vector<string> new_slime;

    for(int i=0;i+1<S.size();i++){
        if(S[i] != S[i+1]){
            // new_slime.push_back(S[i]);
            slime_num++;
        }
    }
    // cout << new_slime.size();
    cout << slime_num << endl;
}