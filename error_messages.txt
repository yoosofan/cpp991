2020/11/23 10:15:49

g++ myArray.cpp 
myArray.cpp: In function ‘void f1()’:
myArray.cpp:55:11: error: no match for ‘operator=’ (operand types are ‘myArray’ and ‘void’)
   55 |   q = p = d;
      |           ^
myArray.cpp:40:8: note: candidate: ‘void myArray::operator=(const myArray&)’
   40 |   void operator=(const myArray& b){
      |        ^~~~~~~~
myArray.cpp:40:33: note:   no known conversion for argument 1 from ‘void’ to ‘const myArray&’
   40 |   void operator=(const myArray& b){
      |                  ~~~~~~~~~~~~~~~^
cpp991$ 

2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

