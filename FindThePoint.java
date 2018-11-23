import java.io.*;
import java.util.*;
class PointReflection{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[]=new int[4];
		int res[]=new int[2*n];
		int px,py,qx,qy,rx,ry,c=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<4;j++)
				arr[j]=sc.nextInt();
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
		while(i<res.length){
			System.out.print(res[i]+" "+res[i+1]+"\n");
			i=i+2;
		}

	}
}
