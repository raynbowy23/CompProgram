#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int answer = 0;
  for(int C=1; C<= N; C+=2){
    int num_of_divisors = 0;
    for(int X=1; X<=C; ++X){
      if(C%X == 0){
        ++num_of_divisors;
      }
    }
    if(num_of_divisors == 8){
      ++answer;
    }
  }
  cout << answer << '\n';
  return 0;
}

int main(){
  int N;
  cin >> N;
  int answer;
  if(N<=104) answer = 0;
  else if(N<=134) answer = 1;
  else if(N<=164) answer = 2;
  else if(N<=188) answer = 3;
  else if(N<=194) answer = 4;
  else answer = 5;
  cout << answer << '\n';
  return 0;
}
