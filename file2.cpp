//文件名：file2
//作  者：lccate
//时  间：2019.6
//描  述：析构函数

#include <stdio.h>
#include <string.h>

struct A
{
	int age;
	A(int a)
	{
		age = a;
		printf("A,%d\n", age);
	}

	~A()
	{
		printf("~A,%d\n",age);
	}
};

int main()
{
	A a(10);
	A *p = new A(20);
	delete p;

	return 0;
}