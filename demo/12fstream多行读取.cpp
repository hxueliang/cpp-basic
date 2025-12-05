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

  char str[3][1024] = {0};

  /**
   * 方法一
   */
  // file.get(str[0], 1024);
  // file.get(); // 读取换行符
  // file.get(str[1], 1024);
  // file.get(); // 读取换行符
  // file.get(str[2], 1024);
  //
  // for (int i = 0; i < 3; i++)
  // {
  //   cout << str[i] << endl;
  // }

  /**
   * 方法二
   */
  for (int i = 0; i < 3; i++)
  {
    file.getline(str[i], 1024);
  }

  for (int i = 0; i < 3; i++)
  {
    cout << str[i] << endl;
  }

  file.close();

  return 0;
}