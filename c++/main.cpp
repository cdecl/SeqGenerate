
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

const char code[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// const char code[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};


int main(int argc, char const *argv[])
{
	clock_t start = clock();

	{
		stringstream oss;
		int n = 0;

		// string s;ake
		ofstream fout("seq-c++.txt");
		for (auto &c1 : code) {
			for (auto &c2 : code) {
				for (auto &c3 : code) {
					for (auto &c4 : code) {
						for (auto &c5 : code) {
							string s = ""s + c1 + c2 + c3 + c4 + c5;
							oss << s << "\n";

							if (!(n % 1000)) {
								fout << oss.str() << flush;
								oss.str("");
								n = 0;
							}
							++n;
						}
					}
				}
			}
		}
		fout << oss.str() << flush;
	}

	clock_t end = clock();
	// long duration = (end - start) ;
	double duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "c++ : " << duration << " sec" << endl;
			
	return 0;
}
