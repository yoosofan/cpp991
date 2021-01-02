#include<iostream>
using namespace std;
template<typename T>
class myArray{
  static const int MAX = 300;
  T a[MAX];
  int n;
  string s[MAX];
  public:
  myArray(){n=0;}
  T& operator[](string m1){
    int i;
    for(i=0; i<n; i++)
      if(s[i] == m1 )
        return a[i];
    if(n < MAX){
      s[n] = m1;
      return a[n++];
    }
    return a[n-1];
  }
};
int main(){
  myArray<double> m1;
  m1["ali"] = 23;
  m1["reza"] = 45;
  cout << m1["ali"] << endl;
  return 0;
}
