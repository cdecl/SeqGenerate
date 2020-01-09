
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

#include "fmt/format.h"

const char code[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(int argc, char const *argv[])
{
	clock_t start = clock();
	{
		char sz[128];
		// stringstream oss;
		int n = 0;
		fmt::memory_buffer buff;
		// string s;ake
		ofstream fout("seq-c++.txt");
		for (auto &c1 : code) {
			for (auto &c2 : code) {
				for (auto &c3 : code) {
					for (auto &c4 : code) {
						for (auto &c5 : code) {
							sz[0] = c1;
							sz[1] = c2;
							sz[2] = c3;
							sz[3] = c4;
							sz[4] = c5;
							sz[5] = '\n';
							sz[6] = '\0';

							// oss.write(sz, 6);
							buff.append(sz, sz + 6);

							if (!(n % 4096)) {
								// fout << oss.rdbuf();
								// oss.str("");

								fout.write(buff.data(), buff.size());
								buff.clear();
								n = 0;
							}
							++n;
						}
					}
				}
			}
		}
		// fout << oss.rdbuf();
		fout.write(buff.data(), buff.size());
		buff.clear();
	}

	clock_t end = clock();
	// long duration = (end - start) ;
	double duration = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "c++ : " << duration << " sec" << endl;

	return 0;
}
