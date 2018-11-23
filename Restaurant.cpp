#include <iostream>
using namespace std;
int gcd(int a, int b);
int main(){
	int t;
	cin >> t;
	int l[t];
	int b[t];
	for(int i=0;i<t;i++){
		cin >> l[i];
		cin >> b[i];
	}
	for(int i=0;i<t;i++){
		int totarea = l[i]*b[i];
		int hcf = gcd(l[i],b[i]);
		int unit = hcf*hcf;
		cout << (int)(totarea/unit) << "\n";
		}

	}
int gcd(int a, int b){
	while(a!=b){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
