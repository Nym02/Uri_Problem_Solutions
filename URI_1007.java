import java.util.Scanner;

public class URI_1007 {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int A,B,C,D,DIFERENCA;
		
		
		System.out.println("Enter");
		A = sc.nextInt();
		B = sc.nextInt();
		C = sc.nextInt();
		D = sc.nextInt();
		
		DIFERENCA = (A * B -C * D);
		
		System.out.println("DIFERENCA = "+DIFERENCA);
		

	}

}
