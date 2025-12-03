#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "arr[0] = " << arr[0] << endl; // 1
  cout << "arr[4] = " << arr[4] << endl; // 5
  arr[4]++;
  cout << "arr[4] = " << arr[4] << endl; // 6

  return 0;
}