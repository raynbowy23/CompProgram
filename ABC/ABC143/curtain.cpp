#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B;
    int result = 0;
    cin >> A >> B;

    if(A > B*2){
        result = A - B*2;
    }else{
        result = 0;
    }
    // result = max(0, A - B * 2)
    cout << result;
}