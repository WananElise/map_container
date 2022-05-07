#include<iostream>
using namespace std;
#include<map>


//自己写仿函数改变排序规则
class mycompare {
public:

	bool operator()(int v1, int v2) const {

		return v1 > v2;
	}

};





void printMap(map<int, int, mycompare>& m) {

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {

		cout << "key=" << it->first << " value=" << it->second << endl;

	}

	cout << endl;

}






void test01() {


map<int, int,mycompare>m;
m.insert(make_pair(1,10));
m.insert(make_pair(2,20));
m.insert(make_pair(5, 50));
m.insert(make_pair(3,30));
m.insert(make_pair(4,40));


printMap(m);

}



int main() {

	test01();
	system("pause");
	return 0;

}