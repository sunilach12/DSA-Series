// C++ is the case sencetive
// First  programming to output Hello sunil

#include <iostream>
using namespace std;
int main()
{
  // cout << "Sunil Acharya !!" << endl; // we can also use the endl --> "\n"
  // cout<<"Acharya","\n";
  cout << "Sunil " << "Acharya" << endl;

  // variables  and data types
  // Container to store data

  //   int age = 25;
  //   char name = 's'; //  char datatype only store the 1 character
  //   float money = 200.3;
  //   bool isSafe = false;
  //   double doublePrice = 10000.33;
  //  cout << "Char :" << name << endl;
  //   cout << "Float :" << money << endl;
  //   cout << "Boolen :" << isSafe << endl;
  //   cout << "double :" << doublePrice << endl;
  //   cout << "int : " << age << endl;
  //   cout << "SIze of Binary bit :" << sizeof(age) << endl; //  this size of tells use how many bit are in age
  // Type casting :

  char grade = 'a'; // 97 from ascci
  int value = grade;
  cout << value << endl;

  double price = 100.099;
  int new_price = (int)price;
  cout << new_price << endl;

  return 0;
}
