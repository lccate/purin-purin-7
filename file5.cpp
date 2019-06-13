//文件名：file5
//作  者：lccate
//时  间：2019.6
//描  述：

#include <stdio.h>
#include <string.h>

class man
{
private:
	char *name;
	int age;
public:
	man()
	{
		name = NULL; //c++中，一般会在类的内部进行初始化
		age = 0;
	}

	~man()
	{
		if(name)
			delete []name;
	}

	const char *get_name()
	{
		return name;
	}

	int get_age()
	{
		return age;
	}

	void set_name(const char *name)
	{
		if(strcmp(name,"张三")==0) //在public中增加了限制条件，就能够限制用户的输入，增强代码的健壮性
			return;
		if(this->name)
			delete []this->name;
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
	}

	void set_age(int age)
	{
		this->age = age;
	}
};

int main()
{
	man m;
	char name[100];
	scanf("%s",name);
	int age = 0;
	scanf("%d",&age);
	m.set_name(name);
	m.set_age(age);
	printf("%s, %d\n", m.get_age(), m.get_name());
	return 0;
}

