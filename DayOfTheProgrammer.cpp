#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define s cout << "13.09." << to_string(y) << "\n"
#define l cout << "12.09." << to_string(y) << "\n"
#define e cout << "26.09.1918" << "\n"
int main(){
	int y;
	cin >> y;
	y < 1918 ? (y%4==0 ? l : s) : (y==1918 ? e : (((y%4==0 && y%100!=0)|| (y%400==0) ? l : s)));	
}
