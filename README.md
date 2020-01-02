## SeqGenerate 테스트 

### 개발환경 
- c++ : mingw (8.1), g++ (8.2)
- .net core 3.1 
- go : go1.13.5 windows/amd64
- java : OpenJDK 11
- python : >= 3.6 

### 실행결과 
- Centos 7

```sh
$ run.sh   
c++ : 1.05 sec            
c# : 1.877 sec            
go : 1.608000 sec         
java : 1.999 sec          
  60466176 seq-c++.txt    
  60466176 seq-cs.txt     
  60466176 seq-go.txt     
  60466176 seq-java.txt   
 241864704 합계             
```

- Windwos 10

```cmd
$ run.bat
c++ : 3.762 sec
c# : 3.798 sec
go : 3.644000 sec
java : 3.698 sec
  60466176 seq-c++.txt
  60466176 seq-cs.txt
  60466176 seq-go.txt
  60466176 seq-java.txt
 241864704 total
```

```bat
$ wc -l *.txt
  60466176 seq-c++.txt
  60466176 seq-cs.txt
  60466176 seq-go.txt
  60466176 seq-java.txt
 241864704 total
```

### # Tuning Point
- String 객체에서 char 배열로 수정 
    - 모든 언어, 특히 Java 의 경우 String 성능이 떨어짐 
    - linux std::string 객체의 경우 windows 보다 성능이 많이 떨어짐 

### Conclusion
- c++의 경우 Buffered Writer 를 stringstream 으로 직접 구현 
    - fstream의 경우 개행이 있는 경우 Flush가 되서 Buffered Writer 꼭 필요 
- c# (.net core) 모든 경우에 최적화가 잘 되어 있음
    - StreamWriter 통해 파일 쓰기 
- golang 모든 경우에 최적화가 잘 되어 있음
    - bufio.NewWriter 통해  파일 쓰기 
- java 8 → OpenJDK 11로 변경후 다른 언어와 비슷한 성능 개선 
    - java 도 최신버전 쓰자