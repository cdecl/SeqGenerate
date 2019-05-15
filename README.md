## SeqGenerate 테스트 

### 개발환경 
- c++ : mingw (8.1), g++ (8.2)
- .net core 2.2
- java : JDK 8
- python : >= 3.6 

### 실행결과 
- centos 7 

``` 
$ run.sh   
c++ : 22.5 sec                                 
c# : 10.356 sec                                
java : 129.186 sec                             
python :  47.36 sec     


$ wc -l *.txt
  60466176 seq-c++.txt
  60466176 seq-cs.txt
  60466176 seq-java.txt
  60466176 seq-python.txt
 241864704 합계
```



- windows 10

```    
$ run.bat
c++ : 9.34 sec
c# : 8.845 sec
java : 131.091 sec
python :  78.81 sec     

$ wc -l *.txt
  60466176 seq-c++.txt
  60466176 seq-cs.txt
  60466176 seq-java.txt
  60466176 seq-python.txt
 241864704 total
```