package main

import (
	"bufio"
	"fmt"
	"os"
	"time"
)

func main() {
	code := []byte{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}
	sz := make([]byte, 5)

	const NEWLINE = "\r\n"

	f, _ := os.Create("seq-go.txt")
	defer f.Close()
	w := bufio.NewWriter(f)
	defer w.Flush()

	now := time.Now()

	for _, c1 := range code {
		for _, c2 := range code {
			for _, c3 := range code {
				for _, c4 := range code {
					for _, c5 := range code {
						sz[0] = c1
						sz[1] = c2
						sz[2] = c3
						sz[3] = c4
						sz[4] = c5

						w.Write(sz)
						w.WriteString(NEWLINE)
					}
				}
			}
		}
	}

	dur := time.Since(now)
	fmt.Println(fmt.Sprintf("go : %f sec", float64(dur.Milliseconds())/float64(1000)))
}
