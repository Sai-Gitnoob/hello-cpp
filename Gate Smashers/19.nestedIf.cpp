#include <iostream>

using namespace std;

int main() {
    int pin = 123;
    int user_pin;
    cout<<"Enter user PIN"<<endl;

    cin>>user_pin;
    if (user_pin == pin){
      cout<<"Welcome to the server"<<endl;
      string action ;

      cout<<"Enter ACTION"<<endl;
      cin>>action;
      if (action == "on")
        cout<< "Server Turned On"<<endl;
      else
        cout<<"Server action on valid"<<endl;
    }
    
    else{
      cout<<"Server Access restricted"<<endl;
    }
    // braces are must in this case to avoid the dangling els  e error

    return 0;
}