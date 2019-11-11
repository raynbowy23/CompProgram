#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <math.h>
#define rep(i, n) for (int i=0;i<n;i++);
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    string result = "No";

    for(int i=1;i<10;i++){
        for(int j=i;j<10;j++){
            if(N == i*j){
                result = "Yes";
                break;
            }
        }
    }
    cout << result << endl;
}