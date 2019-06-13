//文件名：file1
//作  者：lccate
//时  间：2019.6
//描  述：构造函数

#include <stdio.h>
#include <string.h>

struct man
{
	char name[20];
	int age;
	void set_name(const char *p)
	{
		strcpy(name, p);
	}
	void set_age(int a)
	{
		age = a;
	}
	const char *get_name()
	{
		return name;
	}
	int get_age()
	{
		return age;
	}
};

int main()
{
	man m;
	m.set_name("tom");
	m.set_age(20);
	printf("%s,%d\n",m.get_name(),m.get_age());
	return 0;
}