#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

char Molse(string s){
	if(s=="._"){return 'a';}
	if(s=="_..."){return 'b';}
	if(s==""){return 'c';}
	if(s==""){return 'd';}
	if(s==""){return 'e';}
	if(s==""){return 'f';}
	if(s==""){return 'g';}
	if(s==""){return 'h';}
	if(s==""){return 'i';}
	if(s==""){return 'j';}
	if(s==""){return 'k';}
	if(s==""){return 'l';}
	if(s==""){return 'm';}
	if(s==""){return 'n';}
	if(s==""){return 'o';}
	if(s==""){return }
}
int main () {
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		string p;
		if (s[i]==' ') {
			cout<<p<<endl;
		}else {
			p.push_back('s[i]')
		}
	}
	return 0;
}
