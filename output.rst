2020/11/28 10:32:20

.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In member function ‘void myArray::set(int, double) const’:
  myArray.cpp:20:30: error: assignment of read-only location ‘((const myArray*)this)->myArray::a[((int)index)]’
     20 |     if( index < n ) a[index] = value;
        |                     ~~~~~~~~~^~~~~~~
  cpp991$ 




2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

