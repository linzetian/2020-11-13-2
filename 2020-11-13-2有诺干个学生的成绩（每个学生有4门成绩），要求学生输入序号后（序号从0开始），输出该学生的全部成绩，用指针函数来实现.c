//有诺干个学生的成绩（每个学生有4门成绩），要求学生输入序号后（序号从0开始），输出该学生的全部成绩，用指针函数来实现
//返回指针值的函数
#include<stdio.h>
float* search( float(*ptt)[4], int m)//形参是数组指针
{
	float* pt;
	pt = *(ptt + m);//加*之后行转为列
	return pt;
}
int main()
{
	float score[][4] = { {60,40,75,94},{76,86,36,89},{78,67,96,93} };
	float* p;//用来接收函数返回的地址（即指针）
	int i;
	int m;
	printf("请输入学生的序号:");
	do 
	{
		scanf("%d", &m);
		if(m>2)
			printf("输入错误，请重新输入学生序号\n");
	} while (m>2);
	printf("the scores of NO.%d are\n",m);
	p = search(score, m);//此时p表示m行第一列的地址
	for (i = 0; i < 4; i++)
	{
		printf("%5.2f ",*(p+i));//*(p+i)就是打印m行第一列的地址的数值（即指针所指的内容）
	}
}