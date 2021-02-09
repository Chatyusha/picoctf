#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main () {
    char table[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    map<char,int> M;
    for(int i=0;i<26;i++){
        M[char(64+i)]=i;
    }
    string S = "UFJKXQZQUNB";
    for(int i=0;i<26;i++){
        cout<<table[i]<<" : ";
        for(int j=0;j<S.size();j++){
            int c=(M[S[j]]+i)%26;
            cout<<table[c];
        }
        cout<<endl;
    }
    return 0;
}