#include <iostream>
using namespace std;

class Student
{
private:
  int age;

public:
  int id;
  char name[20];
  void printAge()
  {
    cout << "Age: " << age << endl;
  }

  void setAge(int a)
  {
    age = a;
  }

  int getAge()
  {
    return age;
  }
};

int main()
{
  Student s1;

  // s1.age = 20; // error: 'age' is a private member of 'Student'
  s1.id = 1;
  strcpy(s1.name, "John");

  s1.printAge();
  cout << "Id: " << s1.id << endl;
  cout << "Name: " << s1.name << endl;

  s1.setAge(20);
  cout << "Age: " << s1.getAge() << endl;

  return 0;
}