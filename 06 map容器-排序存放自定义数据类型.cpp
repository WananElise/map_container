#include<iostream>
using namespace std;
#include<map>

class name_person
{
public:

	name_person(string name)
	{
		this->m_name = name;
		

	}


	string m_name;
	


};


class age_person
{
public:
	age_person(int age)
	{
		this->m_age = age;
	}
	int m_age;
};


//�������
class mycompare {
public:

	bool operator()(const age_person & p1, const age_person & p2) const {

		return p1.m_age > p2.m_age;

	}
};


//������ӡ
void printMap(const map<age_person, name_person,mycompare>& m)
{

	for (map<age_person, name_person>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "������" << it->second.m_name << " ���䣺" << it->first.m_age << endl;
	}

}


void test01()
{
	map<age_person, name_person, mycompare>m;
	name_person p1("����"); age_person p_1(18);
	name_person p2("����"); age_person p_2(28);
	name_person p3("����"); age_person p_3(38);
	name_person p4("����"); age_person p_4(48);
	name_person p5("�����"); age_person p_5(1158);
	m.insert(make_pair(p_1, p1));
	m.insert(make_pair(p_2, p2));
	m.insert(make_pair(p_3, p3));
	m.insert(make_pair(p_4, p4));
	m.insert(make_pair(p_5, p5));
	printMap(m);

}



int main(){

	test01();



	system("pause");
    return 0 ;
}