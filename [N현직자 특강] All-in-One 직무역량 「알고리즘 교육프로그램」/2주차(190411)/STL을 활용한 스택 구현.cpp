#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack <int> s;
	s.push(3);
	s.push(2);
	s.push(1);

	cout << "size: " << s.size() << endl; //������ ������ ��ȯ

	cout << s.top() << endl; //������ �� �� ��ȯ
	s.pop(); //������ �� �� ����

	cout << s.top() << endl; //������ �� �� ��ȯ
	s.pop(); //������ �� �� ����

	cout << s.top() << endl; //������ �� �� ��ȯ
	s.pop(); //������ �� �� ����

	return 0;
}