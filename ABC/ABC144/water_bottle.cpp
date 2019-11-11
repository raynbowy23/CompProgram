#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <math.h>
#define rep(i, n) for (int i=0;i<n;i++);
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    double a, b, x;
    cin >> a >> b >> x;

    double result;

    // here decides which side we use for calculation
    // if the cube is larger than lsosceles triangle
    if(x/a > 0.5*a*b){
        result = 180.0 * atan(2.0*(b/a-x/(a*a*a)))/M_PI; // arctangent
    }else{
        result = 180.0 * atan((a*b*b)/(2.0*x))/M_PI;
    }

    cout << result << endl;
    // printf("%10.10lf\n", result);
}