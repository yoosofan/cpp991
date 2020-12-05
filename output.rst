
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In member function ‘bool myArray::operator!() const’:
  myArray.cpp:65:11: error: ‘i’ was not declared in this scope
     65 |       if( i < n )
        |     


2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

