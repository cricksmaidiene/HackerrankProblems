import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
	int t;
    Scanner sc = new Scanner(System.in);
	t=sc.nextInt();
	int l[]=new int[t];
	int b[]=new int[t];
	for(int i=0;i<t;i++){
		l[i]=sc.nextInt();
		b[i]=sc.nextInt();
	}
	for(int i=0;i<t;i++){
		int totarea = l[i]*b[i];
		int hcf = gcd(l[i],b[i]);
		int unit = hcf*hcf;
		System.out.println( (int)(totarea/unit));
		}

	}
static int gcd(int a, int b){
	while(a!=b){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
    }
