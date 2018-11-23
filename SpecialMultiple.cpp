#include <iostream>
#include <cmath>
using namespace std;
#define ft for(int i=0;i<t;i++)
#define fn for(int j=1;j<8192;j++)
int main(){
	long nine[8192];
	nine[0]=(long)0;
	nine[1]=(long)9;
	int c=2;
	while(c!=14){
		int twos = pow(2,c);
		long thou = (long)(9*pow(10,c-1));
		int num = twos-(int)(twos/2);
		for(int j=num,k=0;j<twos && k<num;j++,k++)
			nine[j]=thou+nine[k];
		c++;
	}
	int t;
	long result=0;
	cin >> t;
	int arr[t];
	ft cin>>arr[i];
	ft {
		fn if(nine[j]%arr[i]==0){ result = nine[j]; break;}
		cout << result <<endl;
	}
}
