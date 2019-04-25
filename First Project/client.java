import java.net.*;
import java.io.*;

public class client{
	
	public static void main (String[] args) throws IOException{

		String sayaBagi="Assalamualaikum";
		String diaJawab;

		Socket s = new Socket("192.168.182.132",4999);
		
		PrintWriter pr = new PrintWriter(s.getOutputStream());
		pr.println(sayaBagi);
		pr.flush();
		
		
		InputStreamReader in = new InputStreamReader(s.getInputStream());
		BufferedReader bf = new BufferedReader(in);
		
		diaJawab = bf.readLine();
		System.out.println("Client : "+sayaBagi);
		System.out.println("Server : "+diaJawab);
		
	}
}


