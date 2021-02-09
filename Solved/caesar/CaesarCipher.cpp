#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int chat2index(char c){
    return (int)c-'a';
}
string Caesar(string input,int move){
    vector<char> table = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string output;
    for (int i=0;i<input.size();i++){
        int d = chat2index(input[i]);
        output.push_back(table[(d+move)%26]);
    }
    return output;
}
int main () {
    
    string input,output;
    cin >> input;
    for(int i=0;i<26;i++){
        cout<<"rot"<<i<<Caesar(input,i)<<endl;
    }
    return 0;
}
