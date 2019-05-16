
import time

def main():
	code = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]

	start = time.time()

	with open("seq-python.txt", "w") as fout:
		for c1 in code:
			for c2 in code:
				for c3 in code:
					for c4 in code:
						for c5 in code:
							s  = c1 + c2 + c3 + c4 + c5
							fout.write(s + '\n')
						
	tm = time.time() - start
	print("python : " + str(round(tm, 2)) + " sec")

if __name__ == "__main__":
	main()