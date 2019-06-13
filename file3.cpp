//文件名：file3
//作  者：lccate
//时  间：2019.6
//描  述：

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
	A a;// a是一个对象
	printf("%p,%p\n",&a,a.get_addr());
	A *p = new A;
	printf("%p,%p\n",&p, p->get_addr());
	delete p;
	return 0;
}