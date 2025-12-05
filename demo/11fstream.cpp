#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
  fstream file;
  file.open("1.txt", ios::out);
  if (!file.is_open())
  {
    cout << "open file failed" << endl;
    return 0;
  }

  file.put('a');
  char b = 'c';
  file.put(b);
  file.close();


  file.open("1.txt", ios::in);
  char w;
  w = file.get();
  cout << w << endl;

  w = file.get();
  cout << w << endl;

  w = file.get();
  cout << w << endl; // 空

  w = file.get();
  cout << w << endl; // 空

  return 0;
}