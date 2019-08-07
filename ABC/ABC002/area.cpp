#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int x_a, y_a, x_b, y_b, x_c, y_c;

    cin >> x_a >> y_a >> x_b >> y_b >> x_c >> y_c;

    int side = 0;
    int area = 0;

    side = abs(x_a*y_b - x_b*y_a) + abs(x_b*y_c - x_c*y_b) + abs(x_c*y_a - x_a*y_c);
    area = side / 2;
    cout << area;
}