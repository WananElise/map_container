#include<iostream>
using namespace std;
#include<map>

//遍历打印容器
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{

		cout << "key=" << it->first << " value=" << it->second << endl;

	}


	cout << endl;

}




void test01()
{
	map<int, int>m;
	//插入 的三种方式
	//第一种
	m.insert(pair<int, int>(1, 10));
    //第二种
	m.insert(make_pair(2, 20));
	//第三种
	m.insert(map<int, int>::value_type(3, 30));
	//第四种
	m[4] = 40;
	//不推荐用 [] 来插入  可以利用它来访问value
	cout << m[4] << endl;
	printMap(m);


	//删除
	map<int, int>::iterator it = m.begin();
	
	m.erase(it);
	printMap(m);

	m.erase(3);//按照key删除
	printMap(m);

	m.erase(m.begin(), m.end());//清空
	m.clear();
	printMap(m);
}


int main() {

	test01();

	system("Pause");
	return 0;


}
