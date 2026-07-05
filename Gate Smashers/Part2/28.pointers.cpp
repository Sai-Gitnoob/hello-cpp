#include <iostream>

using namespace std;

int main() {
    //pointer is a variable that stores the memory address of the variable

  //   int a =10; //as the variable is int the pointer varible is also must be a int (shown in the line 10)
  // //& empercent is used to denote address of 
  //   int* p = &a; //takes adress of a where the * denotes the pointer varible (pointer to interger)
  //   cout<<a<<endl;
  //   cout<<&a<<endl;
  //   cout<<p<<endl;
  //   cout<<*p<<endl;//dereference * shows the thing the adress points to (in this case a=10)
  //   cout<<&p<<endl;

    int x =15;
    int* pointer=&x;
    cout<< pointer <<endl;
    cout<<*pointer<<endl;
    *pointer +=1;
    cout<<x<<endl;
    return 0;
}