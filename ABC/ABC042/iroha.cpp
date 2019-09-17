#include<iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    array<int, 3> nums;

    for(int i=0;i<3;++i){
        cin >> nums[i];
    }

    sort(nums.begin(),nums.end());

    if(nums[0] == 5 && nums[1] == 5 && nums[2] == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}