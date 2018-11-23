#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i,j,s,n,m;
    cin >>s >>n>>m;
    int an[n],am[m];
    for(i=0;i<n;i++)
        cin >> an[i];
    for(i=0;i<m;i++)
        cin >> am[i];
    int max = 0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(((an[i]+am[j])>max) && ((an[i]+am[j])<=s))
                max = an[i]+am[j];
    max!=0?cout<<max:cout<<-1;
    return 0;
}
