#include <iostream>
using namespace std;

int main()
{
  int VV;
  string result;
  cin >> VV;
  if(VV<=100) result  = "00";
  if(VV>=100 && VV<=999) result = "0" + (VV/100);

  int new_VV = VV / 1000;
  if(new_VV>=1 && new_VV<=5) result = new_VV * 10;
  else if(new_VV>=60 && new_VV<=300) result = new_VV + 65;
  else if(new_VV>=350 && new_VV<=700) result = (new_VV - 30) / 5 + 80;
  else if(new_VV>=700) result = 89;

  cout << result << endl;

  return 0;
}
