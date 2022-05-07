#include<iostream>
using namespace std;
#include<map>


void 	printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{

		cout << "  key值=" << it->first << "  value=" << it->second << endl;
	}

	cout << endl;
}


//map容器 构造 与 赋值
void 	test01()
{
	//创建map容器
	map<int, int>m;
	//map中只能插入对组  key value
	m.insert(pair<int, int>(1, 10)); //匿名对组
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 40));
	m.insert(pair<int, int>(4, 50));
	m.insert(pair<int, int>(5, 80));
	printMap(m);

	//拷贝构造
	map<int, int>m2(m);
	printMap(m2);

	//=赋值
	map<int, int>m3;
	m3 = m2;
	printMap(m3);
}

int main()
{

	test01();

	system("pause");
	return 0;
}