#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue <int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	cout << "size: " << q.size() << endl; //ť�� ������ ��ȯ

	cout << q.front() << endl; //ť�� �� �� ��ȯ
	q.pop(); //ť�� �� �� ����

	cout << q.front() << endl; //ť�� �� �� ��ȯ
	q.pop(); //ť�� �� �� ����

	cout << q.front() << endl; //ť�� �� �� ��ȯ
	q.pop(); //ť�� �� �� ����

	return 0;
}
