import java.util.*;
class Handshake{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int arr[]=new int[t];
		for(int i=0;i<t;i++){
			int n = sc.nextInt();
			arr[i]=(n*(n-1))/2;
		}
		for(int i=0;i<t;i++)
			System.out.print(arr[i]+"\n");
	}
}
