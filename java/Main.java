import java.io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;

class Main {
	static public void main(String []argv) {
		
		final char[] code = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
		char []sz = new char[5];

		File fout = new File("seq-java.txt");

		try (BufferedWriter bw = new BufferedWriter(new FileWriter(fout))) {
			long start = System.currentTimeMillis();

			for (char c1 : code) {
				for (char c2 : code) {
					for (char c3 : code) {
						for (char c4 : code) {
							for (char c5 : code) {
								// String s = String.format("%c%c%c%c%c", c1, c2, c3, c4, c5);
								sz[0] = c1;
								sz[1] = c2;
								sz[2] = c3;
								sz[3] = c4;
								sz[4] = c5;
								bw.write(sz);	
								bw.newLine();
							}
						}
					}
				}
			}
			
			long end = System.currentTimeMillis();
			System.out.println("java : " + ( end - start ) / 1000.0 + " sec");
		}
		catch (Exception ex) {
			ex.printStackTrace();	
		}
	}
}