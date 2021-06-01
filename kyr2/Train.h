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
	Train one("Франция", "Германия", 90);
	Train two("Франция", "Италия", 85);
	Train three("Франция", "Беларусь", 20);
	Train four("Франция", "Норвегия", 100);
	Train five("Германия", "Франция", 90);
	Train six("Германия", "Италия", 97);
	Train seven("Германия", "Беларусь", 93);
	Train eight("Германия", "Норвегия", 95);
	Train nine("Италия", "Франция", 84);
	Train ten("Италия", "Германия", 86);
	Train eleven("Италия", "Беларусь", 80);
	Train twelve("Италия", "Норвегия", 89);
	Train therteen("Беларусь", "Франция", 92);
	Train forteen("Беларусь", "Германия", 91);
	Train fefteen("Беларусь", "Италия", 98);
	Train sixteen("Беларусь", "Норвегия", 99);
	Train seventeen("Норвегия", "Франция", 90);
	Train eighteen("Норвегия", "Германия", 94);
	Train nineteen("Норвегия", "Италия", 100);
	Train twenty("Норвегия", "Беларусь", 84);
}