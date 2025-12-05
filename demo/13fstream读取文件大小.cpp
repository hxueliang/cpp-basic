#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
  fstream file;

  file.open("13fstream.jpg", ios::in);
  file.seekg(0, ios::end);
  int size = file.tellg();

  cout << "文件大小为：" << size << "字节" << endl;

  file.close();

  return 0;
}