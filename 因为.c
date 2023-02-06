#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{   
	int a;

	printf("请输入年龄");
	scanf("%d", &a);

	
	if(a >= 18)
	{printf("成年"); 
	}
	else {
		printf("未成年");
	}





	return 0;
}

