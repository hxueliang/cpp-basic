#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
  fstream file;
  file.open("12fstream.txt", ios::out | ios::in);
  if (!file.is_open())
  {
    cout << "文件打开失败" << endl;
    return 0;
  }

  file.close();

  return 0;
}