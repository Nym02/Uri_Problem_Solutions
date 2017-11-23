import java.util.Scanner;

public class uri1018 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] a = {100,50,20,10,5,2,1};
		
		int b;
		int[] d = [100];
		
		b = sc.nextInt();
		int d = 0;
		for(int i = 0; i< a.length; i++)
		{
			d = b/a[i];
			System.out.println(d);
		}
		
		
		

	}

}
