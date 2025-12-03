#include <iostream>
using namespace std;

int x = 1;
int y = 2;

void fun()
{
  cout << "Inside global scope" << endl;
}

namespace firstNamespace
{
  int x = 11;
  int y = 12;
  void fun()
  {
    cout << "Inside firstNamespace" << endl;
  }

  namespace secondNamespace
  {
    int x = 111;
    int y = 222;
    void fun()
    {
      cout << "Inside secondNamespace" << endl;
    }
  }
}

int main()
{
  fun();                                  // Inside global scope
  firstNamespace::fun();                  // Inside firstNamespace
  firstNamespace::secondNamespace::fun(); // Inside secondNamespace
  return 0;
}