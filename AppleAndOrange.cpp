#include <iostream>
#include <cmath>
#include <string>
#define fm for(i=0;i<m;i++)
#define fn for(i=0;i<n;i++)
using namespace std;
int main(){
	long long s,t,a,b,m,n,i,c1=0,c2=0;
	cin >> s >> t;
	cin >> a >> b;
	cin >> m >> n;
	long long app[m],orr[n];
	fm cin >> app[i];
	fn cin >> orr[i];
	fm if(app[i]>0 && app[i]>=s-a && app[i]<=t-a) c1+=1;
	fn if(orr[i]<0 && (long)(abs(orr[i]))>=b-t && (long)(abs(orr[i]))<=b-s) c2+=1;
	cout<<c1<<"\n"<<c2<<endl;  	
}
