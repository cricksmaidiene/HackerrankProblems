#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	int n[t];
	int k[t];
	for(int i=0;i<t;i++){
		cin >> n[i];
		cin >> k[i];
	}	
	for(int i=0;i<t;i++){
		int num = n[i];
		int arr[num];
		int that = num-1;
		int count=0;
		for(int a=0,b=1;a<=num&&b<=num;a+=2,b+=2){
			arr[a] = that;
			that--;
			arr[b] = count; 
			count++;
		}
		int chk = k[i];
		for(int j=0;j<num;j++)
			if(arr[j]==chk)
				cout << j <<"\n";
	}
}
