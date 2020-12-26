#include<iostream>
using namespace std;
void sort(double a[], int n);
void sort(string a[], int n);
void sort(int a[], int n);

int main(){
  double ae[20];
  int i,j=2;
  for(i=0; i<6; i++) ae[i]=36-i;
  for(i=0;i<6;i++) cout << ae[i] << '\t';
  sort(ae,6);
  for(i=0;i<6;i++) cout << ae[i] << '\t';
  cout << endl;
  string sta[] = {"Kamran", "Koroush", "Ahmad", "Ali", "Leyla"};
  sort(sta, 5);
  for(i = 0; i < 5; i++)
    cout << sta[i] << '\t';
  cout << endl;
  return 0;
}
void sort(double a[],int n){
  double temp;
  int i,j; 
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
}
void sort(int a[],int n){
  int temp;
  int i,j; 
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
}
void sort(string a[],int n){
  string temp;
  int i,j; 
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
}
