#include <iostream>
using namespace std;
int main (){
    int n=15;
    int pass[n];
    for(int i=0;i<n;i++){
        cin >> pass[i];
    }
    for(int i=0;i<n;i++){cout<<(char)(pass[i]+64);}
    cout<<endl;
    return 0;
}