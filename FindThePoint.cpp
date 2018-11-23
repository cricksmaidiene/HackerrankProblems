#include <iostream>
#include <cmath>
using namespace std;
	int main(){
		int n;
        cin >> n;
		int arr[4];
		int res[2*n];
		int px,py,qx,qy,rx,ry,c=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<4;j++)
				cin >> arr[j];
			px = arr[0];
			py = arr[1];
			qx = arr[2];
			qy = arr[3];
			rx = 2*qx-px;
			ry = 2*qy-py;
			res[c]=rx;
			res[c+1]=ry;
			c+=2;
		}
		int i=0;
        int l = sizeof(res)/sizeof(*res);
		while(i<l){
			cout << res[i] <<" "<< res[i+1] <<"\n";
			i=i+2;
		}

	}
