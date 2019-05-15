using System;
using System.IO;
using System.Diagnostics;

namespace netcon
{
	class Program
	{
		static void Main(string[] args)
		{
			var code = new string[]{"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
			
			Stopwatch sw = new Stopwatch();
			sw.Start();

			using (TextWriter fw = new StreamWriter(@"seq-cs.txt")) {
				foreach (var c1 in code) {
					foreach (var c2 in code) {
						foreach (var c3 in code) {
							foreach (var c4 in code) {
								foreach (var c5 in code) {
									string s = c1 + c2 + c3 + c4 + c5;
									fw.WriteLine(s);
								}
							}
						}
					}
					
				}
			}

			sw.Stop();
			Console.WriteLine((sw.ElapsedMilliseconds / 1000.0).ToString() + " sec");
		} 
	}
}
