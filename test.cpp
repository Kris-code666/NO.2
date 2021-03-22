#include<stdio.h>

#include<string.h>
struct Team
{
	int i;
	char arr[14];
}one={3,"I love China!"};

int main()
{   
	struct Team *p;
	one.i=3;
	p=&one;
	printf("%s\n",p->arr);
	return 0;
}

