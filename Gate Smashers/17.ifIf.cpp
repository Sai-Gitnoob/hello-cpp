#include <iostream>

using namespace std;

int main() {
    int age =19;
    if (age==19)
      cout<<"Your are 19"<<endl;
    
    if (age>=18)
      cout<<"You are balik"<<endl;
    
    if (age>=18)
      cout<<"You can have a driving license"<<endl;
    
    if (age >= 21)
      cout<<"You can Drink Alcohol Legally"<<endl;
    else
      cout<<"Wait for "<<21-age <<" years to drink alcohol legally"<<endl;

    return 0;
}