#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string W;
    string output;
    string vowel = "aiueo";
    int flag;

    cin >> W;

    for(int j=0;j<W.length();j++){
        for(int i=0;i<vowel.length();i++){
            if(W[j] != vowel[i]){
                flag = 0;
            }else{
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            output += W[j];
        }
    }
    cout << output << "\n";
}