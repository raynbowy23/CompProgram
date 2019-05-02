#include <iostream>
#include <vector>
using namespace std;

int main(){
  int H, W;
  std::vector<string> a[110][110];

  cin >> H >> W;
  for(int i=0;i<H;i++)
    for(int j=0;j<W;j++)
      cin >> a[i][j];

  int mark_i, mark_j;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(a[i][j] == "#"){
        mark_i[i] = 1;
        mark_j[i] = 1;
      }else{
        mark_i[i] = 0;
        mark_j[i] = 0;
      }
    }
  }
  int res_arr[H][W];

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(mark_i[i] == 1) res_arr[i][j] = a[i][j];
      else res_arr[i][j] = a[i+1][j];
    }
  }

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(mark_i[i] == 1) res_arr[i][j] = a[i][j];
      else res_arr[i][j] = a[i][j+1];
    }
  }

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << res_arr[i][j] << endl;
    }
    cout << "\n" << endl;
  }

  return 0;
}
