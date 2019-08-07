#include<iostream>
#include<string>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string W;
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
        //if a word is vowel
        if(flag == 1){
            W.replace(j, 1, "");
        }
        cout << W[j];
    }
    cout << "\n";
}