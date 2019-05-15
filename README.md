## SeqGenerate 테스트 

### 개발환경 
- c++ : mingw (8.1), g++ (8.2)
- .net core 2.2
- java : JDK 8
- python : >= 3.6 

### 실행결과 

```bash
# Centos 7
$ run.sh   
c++ : 8.95 sec
c# : 10.202 sec                               
java : 129.186 sec                             
python :  47.36 sec    

# Tuning : String → char[]
$ run.sh   
c++ : 4.49 sec
c# : 3.234 sec
java : 6.021 sec
python :  47.36 sec    
```

```bat
REM Windwos 10
$ run.bat
c++ : 7.853 sec
c# : 8.995 sec 
java : 131.091 sec
python :  78.81 sec     

REM Tuning : String → char[]
$ run.bat
c++ : 5.889 sec
c# : 3.476 sec
java : 6.842 sec
python :  78.81 sec     
```

```bat
$ wc -l *.txt
  60466176 seq-c++.txt
  60466176 seq-cs.txt
  60466176 seq-java.txt
  60466176 seq-python.txt
 241864704 합계
```

### # Tuning Point
- String 객체에서 char 배열로 수정 
    - 모든 언어, 특히 Java 의 경우 String 성능이 떨어짐 
    - linux std::string 객체의 경우 windows 보다 성능이 많이 떨어짐 
    - c# (.net core) 모든 경우에 최적화가 잘 되어 있음
