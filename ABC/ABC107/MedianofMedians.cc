#include <iostream>
#include <algorithm>
using namespace std;

int median(int a)
{
  for(int i=0;i<sizeof(a);i++){
    if(sizeof(a)%2==0){
      int num = i/2;
      return a[num];
    }else{
      int num = i/2+1
      return a[num];
    }
  }
}

int main()
{
  int N;
  cin >> N;
  int a[N];
  int arr[N];
  for(int i=0;i<N;++i) cin >> a[i]; arr[i] = a[i];

  for(int i=2;i<N;i++){
    for(int j=0;j<N;j+=i){
      int new_arr = std::sort(a[j], a[j+i]);
      arr = median(new_arr);
    }
  }
  cout << median(arr) << endl;

  return 0;
}
