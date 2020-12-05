
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp:79:61: error: redefinition of ‘const myArray& b’
     79 |   friend myArray operator-(const myArray& b, const myArray& b);
        |                                              ~~~~~~~~~~~~~~~^
  myArray.cpp:79:43: note: ‘const myArray& b’ previously declared here
     79 |   friend myArray operator-(const myArray& b, const myArray& b);
        |                            ~~~~~~~~~~~~~~~^
  myArray.cpp:81:52: error: redefinition of ‘const myArray& b’
     81 | myArray operator-(const myArray& b, const myArray& b){
        |                                     ~~~~~~~~~~~~~~~^
  myArray.cpp:81:34: note: ‘const myArray& b’ previously declared here
     81 | myArray operator-(const myArray& b, const myArray& b){
        |                   ~~~~~~~~~~~~~~~^
  myArray.cpp: In function ‘myArray operator-(const myArray&)’:
  myArray.cpp:84:22: error: ‘a’ was not declared in this scope
     84 |   for(int i = 0; i < a.n; i++ )
        |                      ^
  cpp991$ 



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

