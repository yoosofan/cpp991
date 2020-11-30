2020/11/30 10:20:34

.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In constructor ‘myArray::myArray(double)’:
  myArray.cpp:32:21: error: incompatible types in assignment of ‘double*’ to ‘double [100]’
     32 |     a = new double[1];
        |                     ^
  myArray.cpp:33:7: error: ‘o’ was not declared in this scope
     33 |     a[o] = x;
        |       ^
  cpp991$ 


2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

