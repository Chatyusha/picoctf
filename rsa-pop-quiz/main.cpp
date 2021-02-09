#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Exeuclid {
	public:
		int a;
		int b;
		int c;
		int x;
		int y;
		void ToString(){
			printf("(%d)x%d+(%d)x%d=%d\n",a,x,b,y,c);
		}
};

Exeuclid gcm(int x,int y)
{
	Exeuclid E;
	if ( x < y ) {
		int z=x;
		x=y;
		y=z;
	}
	
	int a0=1,a1=0;
	int b0=0,b1=1;
  int r=x%y;
	while (r!=0){
		r=x%y;
		int q = x/y;
		x=y;
		y=r;
		int a0s=a0,a1s=a1,b0s=b0,b1s=b1;
		a0=b0s;
		a1=b1s;
		b0=a0s-b0s*q;
		b1=a1s-b1s*q;
		r=x%y;
		printf("%d x %d + (%d) x %d = %d\n",b0,x,b1,y,r);

	}
	E.a = b0;
	E.b = b1;
	E.c = y;
	
	return E;
}
int main () {
	int x,y;
  cin >> x >> y;
	Exeuclid E = gcm(x,y);
	 printf("(%d)x%d+(%d)x%d=%d\n",E.a,x,E.b,y,E.c);
  return 0;
}
