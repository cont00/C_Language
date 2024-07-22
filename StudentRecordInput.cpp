#include <stdio.h>

int i, num;
int score[100][10];
double result[]={};
char rank[]={}, name[1][100];

int StudentNumber(void);
int RecordInput(void);
int RankSistem(void);
int RecordOutput(void);

int StudentNumber(void)
{
	printf("����� �л� �� �Է�: ");
	scanf("%d", &num);
	
	printf("\n");
}

int RecordInput(void)
{
	for(i=0; i<num; i++)
	{
		printf("�̸�: ");
		scanf("%s", name[i]);
		printf("�����: ");
		scanf("%d", &score[i][0]);
		printf("�����: ");
		scanf("%d", &score[i][1]);
		printf("���м���: ");
		scanf("%d", &score[i][2]);
		
		printf("\n");
		
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		result[i] = score[i][3] / 3.0;
		RankSistem();
		
	}
}

int RankSistem(void)
{
	if(result[i]>=90.0)
	{
		rank[i]='A';
	}
	else if(result[i]>=80.0)
	{
		rank[i]='B';
	}
	else if(result[i]>=70.0)
	{
		rank[i]='C';
	}
	else if(result[i]>=50.0)
	{
		rank[i]='D';
	}
	else
	{
		rank[i]='F';
	}
	
	return rank[i];
}

int RecordOutput(void)
{
	printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��     %-10s��    %-6s  ��    %-6s  ��    %-6s  ��    %-6s  ��   %-4s   ��\n", "�̸�", "����", "����", "����", "���", "����");
	printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	for(i=0; i<num; i++)
	{
		printf("��   %-10s  ��     %-6d ��     %-6d ��     %-6d ��    %-6.1f  ��     %-4c �� \n", name[i], score[i][0], score[i][1], score[i][2], result[i], rank[i]);
		if(i<num-1)
		{ 
			printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
		}
	}
	printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������");
}

int main(void)
{	
	StudentNumber();
	RecordInput();
	RecordOutput();
	
	return 0;
}
