#include<iostream>
using namespace std;
#include<map>

//map�������Һ�ͳ��
void test01()
{
	//����
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	//m.insert(make_pair(3, 40));map����������ظ�key��Ԫ�� �����ᱨ��
	map<int,int>::iterator pos= m.find(5);
	if (pos != m.end())
	{
		cout << "�ҵ���Ԫ�� �� key=" << (*pos).first << " value=" << pos->second << endl;
	}
	else
	{
		cout << "û���ҵ���Ԫ��" << endl;
	}
	//ͳ��
	
	//count����һ�����Σ���m�������м���keyΪ3��Ԫ��
	
	//map����������ظ�key��Ԫ�� �����ᱨ��,����
	//����count������� Ҫô��0 Ҫô��1
	//multimap count�Ľ�����ܴ���1��
	int num = m.count(3);
	cout << "num=" << num << endl;


}



int main() {


	test01();

	system("pause");
	return 0;
}