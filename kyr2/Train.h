#pragma once
#include <string>
class Train
{
	int count_of_people;
	int bagage;
	int max_bagage = 2000;
	int max_people;
	std::string from_where;
	std::string where_to;
public:
	Train(std::string m_from_where, std::string m_where_to, int m_max_people) :from_where(m_from_where),
		where_to(m_where_to),
		max_people(m_max_people) {};
	Train() {};
	int setCount_of_people(int people)
	{
		count_of_people += people;
		return count_of_people;
	}
	int setBagage(int bagag)
	{
		bagage += bagag;
		return bagage;
	}
	int getMax_people()
	{
		return max_people;
	}
	int getMax_bagage()
	{
		return max_bagage;
	}
	int getCount_of_people()
	{
		return count_of_people;
	}
	int get_set_people(int people)
	{
		count_of_people = people;
		return count_of_people;
	}
	int get_set_bagage(int bagag)
	{
		bagage = bagag;
		return bagage;
	}
	int getBagage()
	{
		return bagage;
	}

};
static void create_plain()
{
	Train one("�������", "��������", 90);
	Train two("�������", "������", 85);
	Train three("�������", "��������", 20);
	Train four("�������", "��������", 100);
	Train five("��������", "�������", 90);
	Train six("��������", "������", 97);
	Train seven("��������", "��������", 93);
	Train eight("��������", "��������", 95);
	Train nine("������", "�������", 84);
	Train ten("������", "��������", 86);
	Train eleven("������", "��������", 80);
	Train twelve("������", "��������", 89);
	Train therteen("��������", "�������", 92);
	Train forteen("��������", "��������", 91);
	Train fefteen("��������", "������", 98);
	Train sixteen("��������", "��������", 99);
	Train seventeen("��������", "�������", 90);
	Train eighteen("��������", "��������", 94);
	Train nineteen("��������", "������", 100);
	Train twenty("��������", "��������", 84);
}