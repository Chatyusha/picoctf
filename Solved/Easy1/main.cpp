#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;
int Char2Index(char c){
    return int(c)-65;
}
char Index2Char(int i){
    return (char)(65+i);
}
char AddChar(char a, char b){
    return char(65 + ((a-65)+(b-65))%26);
}
int main () {
    string F="UFJKXQZQUNB",K="SOLVECRYPTO";
    cout<<"picoCTF{";
    for(int i=0;i<F.size();i++){
        for(int j=0;j<26;j++){
            char cap = Index2Char(j);
            if(AddChar(K[i],cap)==F[i]){
                cout<<cap;
            }
        }
    }
    cout<<"}"<<endl;
    return 0;
}