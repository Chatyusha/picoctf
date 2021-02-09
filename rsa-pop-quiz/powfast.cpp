#include <iostream>

using namespace std;

int fastpowmod(int a, int n, int d){
	if ( n == 0 ) {
		return 1;
	}
	if ( n == 1 ) {
		return a % d;
	}
	if ( n % 2 == 1 ) {
		int ret = fastpowmod(a,n/2,d);
		ret = ret * ret % d;
		ret = ret * a % d;
		return ret;
	}
	if ( n  % 2 == 0) {
		int ret = fastpowmod(a,n/2,d);
		ret = ret * ( ret % d );
		return ret;
	}
	return -1;
}


int main () {
	int a,n,d;
	std::cin >> a >> n >> d;
	std::cout<<fastpowmod(a,n,d)<<std::endl;		
	return 0;
}
