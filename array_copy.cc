#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

void array_copy(int array[], int len) 
{
  //int result[]=new int[len];
  //int *result=new int[len];
  int result[len];
  for (int i=0;i<len;i++)
  {
    result[i]=array[i];
  }
  int temp;
  temp=result[0];
  result[0]=result[1];
  result[1]=temp;
}
void array_uncopy(int array[], int len) 
{
  int temp;
  temp=array[0];
  array[0]=array[1];
  array[1]=temp;
}
void print_array(int array[], int len)
{
  for (int i=0;i<len;i++)
  {
    cout<<array[i]<<",";
  }
  cout<<endl;
}

int main() 
{
  int a[] = {4, 2, 5};

  print_array(a,sizeof(a)/sizeof(int));
  array_copy(a,sizeof(a)/sizeof(int));
  print_array(a,sizeof(a)/sizeof(int));

  cout<<endl;
  print_array(a,sizeof(a)/sizeof(int));
  array_uncopy(a,sizeof(a)/sizeof(int));
  print_array(a,sizeof(a)/sizeof(int));
  return 0;
}
