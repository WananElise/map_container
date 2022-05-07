#include<iostream>
using namespace std;
#include<map>

//map容器查找和统计
void test01()
{
	//查找
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	//m.insert(make_pair(3, 40));map不允许插入重复key的元素 但不会报错
	map<int,int>::iterator pos= m.find(5);
	if (pos != m.end())
	{
		cout << "找到该元素 ： key=" << (*pos).first << " value=" << pos->second << endl;
	}
	else
	{
		cout << "没有找到该元素" << endl;
	}
	//统计
	
	//count返回一个整形，看m容器中有几个key为3的元素
	
	//map不允许插入重复key的元素 但不会报错,所以
	//对于count结果而言 要么是0 要么是1
	//multimap count的结果可能大于1；
	int num = m.count(3);
	cout << "num=" << num << endl;


}



int main() {


	test01();

	system("pause");
	return 0;
}