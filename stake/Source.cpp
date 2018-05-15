#include "Stack.h"
#include "Stack.cpp"

int main()
{
	setlocale(LC_ALL, "");
	Stack<int> s;
	/*s.push(3);
	s.push(2);*/
	for (int i = 0; i < 10; i++)
	{
		s[i];
	}
	/*cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.empty() << endl;*/

	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	int arr[3] = { 1, 2, 3 };
	//Stack<int>(arr);
	system("pause");
	return 0;
}