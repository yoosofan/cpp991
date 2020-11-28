2020/11/28 10:35:14

.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp:29:29: error: constructors may not be cv-qualified
     29 |   myArray(const myArray& b) const{
        |                             ^~~~~
  cpp991$ 



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

