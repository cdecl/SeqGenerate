## SeqGenerate 테스트 

### 개발환경 
- c++ : mingw (8.1), g++ (8.2)
- .net core 2.2
- go : go1.13.5 windows/amd64
- java : JDK 8
- python : >= 3.6 

### 실행결과 

```bash
# Centos 7
$ run.sh   
c++ : 1.75 sec
c# : 2.715 sec
java : 5.399 sec
python : 30.19 sec  
```

```bat
REM Windwos 10
$ run.bat
c++ : 3.618 sec
c# : 3.511 sec
go : 3.399000 sec
java : 5.124 sec
python : 51.31 sec   
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
    - c# (.net core) 모든 경우에 최적화가 잘 되어 있음
