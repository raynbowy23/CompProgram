#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string S; long long K;
  cin >> S >> K;
  for(int i=0;i<min((long long)S.size(), K); i++){
    //K以下で１以外なら終わり
    if(S[i] >= '2'){ cout << S[i] << endl; return 0;}
  }
  cout << '1' << endl;
  return 0;
}
