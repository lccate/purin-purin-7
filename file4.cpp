//�ļ�����file4
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����

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
	m.set_name("aa");//���������һ����벻������ʵ�ʻᵼ���ڴ�й©
	printf("%s\n", m.get_name());
	//printf("%d\n", m.age);//ageΪ˽�г�Ա�������ⲻ�ɷ���,����������public���������˹��з���get_age��Ϳ��Է��ʵ�

	return 0;
}