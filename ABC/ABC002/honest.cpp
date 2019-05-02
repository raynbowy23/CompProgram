#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int X, Y;
    cin >> X >> Y;
    if(X > Y){
        cout << X;
    }else{
        cout << Y;
    }
}