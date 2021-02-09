#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

pair<int , char> MakePart(string s){
    pair<int,char> P;
    if(s[2]==')'){
        P.first = s[1]-'0';
        P.second = s[s.size()-2];
    }
    else{
        P.first=10 * (s[1]-'0') + s[2]-'0';
        P.second = s[s.size()-2];
    }
    return P;
}

int main () {
    vector<string> input(32);
    char pass[32];
    for(int i=0;i<32;i++){
        cin >> input.at(i);
        pass[MakePart(input[i]).first]=MakePart(input[i]).second;
    }
    cout<<"picoCTF{";
    for(int i=0;i<32;i++){
        cout<<pass[i];
    }
    cout<<"}"<<endl;
    return 0;
}