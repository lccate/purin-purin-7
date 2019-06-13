//文件名：file4
//作  者：lccate
//时  间：2019.6
//描  述：

#include <stdio.h>
#include <string.h>

class man
{
public:
	char *name;
	int age;

	man()
	{
		name = NULL;
	}

	void set_name(const char *name)
	{
		if(name)
			delete []this->name;
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
	}

	const char *get_name()
	{
		if (name)
			return name;
		else
			return "nothing";
	}

	int get_age()
	{
		return age;
	}

	~man()
	{
		if (name)
			delete []name;
	}
private:
	int age;
};

int main()
{
	man m;
	m.set_name("dqwwbfiuqbeoifcboqri");
	m.set_name("aa");//如果加上这一句编译不出错但是实际会导致内存泄漏
	printf("%s\n", m.get_name());
	//printf("%d\n", m.age);//age为私有成员，在类外不可访问,但是在类中public部分增加了公有方法get_age后就可以访问到

	return 0;
}