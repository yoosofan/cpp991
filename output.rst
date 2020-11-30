2020/11/30 10:01:20

.. code:: sh

  src$ cd cpp991/
  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘void f1()’:
  myArray.cpp:106:6: error: ‘p’ was not declared in this scope
    106 |   f2(p);
        |      ^
  myArray.cpp: At global scope:
  myArray.cpp:113:7: error: redefinition of ‘class myArray’
    113 | class myArray{
        |       ^~~~~~~
  myArray.cpp:3:7: note: previous definition of ‘class myArray’
      3 | class myArray{
        |       ^~~~~~~
  myArray.cpp:203:5: error: redefinition of ‘int main()’
    203 | int main(){
        |     ^~~~
  myArray.cpp:96:5: note: ‘int main()’ previously defined here
     96 | int main(){
        |     ^~~~
  myArray.cpp:207:6: error: redefinition of ‘void f1()’
    207 | void f1(void){
        |      ^~
  myArray.cpp:100:6: note: ‘void f1()’ previously defined here
    100 | void f1(void){
        |      ^~
  myArray.cpp:226:6: error: redefinition of ‘void f2(myArray)’
    226 | void f2(myArray k){
        |      ^~
  myArray.cpp:108:6: note: ‘void f2(myArray)’ previously defined here
    108 | void f2(myArray k){
        |      ^~
  cpp991$ 



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

