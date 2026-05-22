#include <iostream>
#include <stack>
using namespace std;

int main()
{
  system("cls");
  stack<int> S;
  S.push(5);
  S.push(5);
  S.push(3);
  S.push(1);
  cout << "popped " << S.top() << endl;
  S.pop();
  cout << "New Top " << S.top();

  return 0;
}
