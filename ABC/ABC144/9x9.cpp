#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#define rep(i, n) for (int i=0;i<n;i++);
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int result = 0;
    if(1<=a && a<=9 && 1<=b && b<=9){
        result = a * b;
    }else{
        result = -1;
    }
    cout << result << endl;
}