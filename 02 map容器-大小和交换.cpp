#include<iostream>
using namespace std;
#include<map>


void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "  keyֵ=" << it->first << "  value=" << it->second << endl;
	}
	cout << endl;


}






//��С
void test01()
{
	map<int,int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	if (m.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "������СΪ:" << m.size() << endl;
	}
}
//����
void test02()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	map<int, int>m2;
	m2.insert(pair<int, int>(1, 900));
	m2.insert(pair<int, int>(2, 600));
	cout << "����ǰ" << endl;
	printMap(m1);
	printMap(m2);
	cout << "������" << endl;
	m1.swap(m2);
	printMap(m1);
	printMap(m2);
;}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}