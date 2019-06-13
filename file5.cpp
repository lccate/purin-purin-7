//�ļ�����file5
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����

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
		name = NULL; //c++�У�һ���������ڲ����г�ʼ��
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
		if(strcmp(name,"����")==0) //��public���������������������ܹ������û������룬��ǿ����Ľ�׳��
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

