//�ļ�����file3
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����

#include <stdio.h>

struct A
{
	A()
	{

	}
	int age;
	void set_age(int age)
	{
		this->age = age;//
	}
	struct A *get_addr()
	{
		return this;
	}
};

int main()
{
	A a;// a��һ������
	printf("%p,%p\n",&a,a.get_addr());
	A *p = new A;
	printf("%p,%p\n",&p, p->get_addr());
	delete p;
	return 0;
}