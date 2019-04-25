import java.net.*;
import java.io.*;

public class server{
	
	public static void main (String[] args) throws IOException{

    String DiaBagi;
		String SayaJawab="Waalaikumsalam";

    ServerSocket serSoc = new ServerSocket(4999);
		Socket s = serSoc.accept();
		
		PrintWriter pr = new PrintWriter(s.getOutputStream());
		pr.println(SayaJawab);
		pr.flush();
		
		
		InputStreamReader in = new InputStreamReader(s.getInputStream());
		BufferedReader bf = new BufferedReader(in);
		
		DiaBagi = bf.readLine();
    System.out.println("Client : "+DiaBagi);
		System.out.println("Server : "+SayaJawab);
		
	}
}

