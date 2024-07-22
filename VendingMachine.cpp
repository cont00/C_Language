#include <stdio.h>
#include <stdlib.h>

int calculate[]={}, P_calculate;
int opt, re_opt, num, i=1;
int payment[]={0, 1500, 1200, 1700, 1300, 1400, 1100, 1600};
char D_Co[]={"��ī�ݶ�500ml"}, D_Sik[]={"����500ml"}, D_Rad[]={"RadBull 300ml"}, D_Fan[]={"������ȯŸ500ml"};
char D_Wel[]={"��ġ������500ml"}, D_Mil[]={"��Ű��300ml"}, D_Orenge[]={"�������ֽ�600ml"};

int Calculate(void);
void DrinkList(void);
int DrinkSelect(void);
int Num(void);
int Balance(void);
int DrinkReSelect(void);

int Calculate(void)
{
	printf("���Աݾ�: ");
	scanf("%d", &calculate[i]);
	
	printf("\n");
	
	P_calculate=calculate[1];
	calculate[0] += calculate[i]; 
	
	return calculate[0];
}

void DrinkList(void)
{
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��0. �ǵ��ư���		     �� 4. %-12s (%6d��)�� \n", D_Fan, payment[4]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��1. %-12s (%6d��) �� 5. %-12s (%6d��)�� \n", D_Co, payment[1], D_Wel, payment[5]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��2. %-12s  (%6d��) �� 6. %-12s    (%6d��)�� \n", D_Sik, payment[2], D_Mil, payment[6]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��3. %-12s (%6d��) �� 7. %-12s (%6d��)�� \n", D_Rad, payment[3], D_Orenge, payment[7]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
}

int DrinkSelect(void)
{
	printf("����� ����: ");
	scanf("%d", &opt);
	printf("\n");
	
	switch(opt)
	{
		case 0:
			printf("���Ÿ� ����ϼ̽��ϴ�. \n");
			printf("������ �ݾ��� ��ȯ�մϴ�. \n\n");
			printf("��ȯ�� �ݾ�: %d�� \n\n", calculate[0]);
			break;
		case 1:
			printf("��ī�ݶ� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("��ī�ݶ� %dĵ �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 2:
			printf("������ �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("���� %dĵ �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 3:
			printf("RadBull�� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("RadBull %dĵ �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 4:
			printf("������ȯŸ�� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("������ȯŸ %dĵ �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 5:
			printf("��ġ�������� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("��ġ������ %dĵ �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 6:
			printf("��Ű���� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("��Ű�� %dĵ �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���űݾ�: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 7:
			printf("�������ֽ��� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("�������ֽ� %d�� �ֹ��ϼ̽��ϴ�. \n", num);
			printf("���űݾ�: %d�� �Դϴ�. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("���� �ܾ�: %d��\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;			
		default :
			printf("ǰ���� �޴��� �����ϼ̰ų� ���� �޴��� �����ϼ̽��ϴ�. \n");
			printf("�ٽ� �������ּ���. \n\n"); 
			return DrinkSelect();
	}
}

int Num(void)
{	
	printf("���� ���� �Է�: ");
	scanf("%d", &num);
	printf("\n");
	
	return num;
}

int Balance(void)
{
	int Ba_Opt=0;
	
	printf("\n");
	printf("������ �ݾ��� �����մϴ�. \n\n");
	printf("������ �ݾ�: %d��\n\n", calculate[0]);
	
	printf("������ �ݾ��� �����Ͽ� ������ �Ͻ������Ǿ����ϴ�. \n\n");
	
	printf("��� �ֹ��� ����Ͻñ⸦ ���Ͻø� 0��, \n");
	printf("�ݾ��� �߰��� �����Ͻñ⸦ ���Ͻø� 1��, \n");
	printf("�ֹ��� ����ϰ� ����� �ֹ�����Ʈ�� ���ư��ñ� ���Ͻø� 2���� �����ּ���. \n");
	printf("����: "); 
	scanf("%d", &Ba_Opt);
	
	printf("\n");
	
	switch(Ba_Opt)
	{
		case 0:
			printf("��� �ֹ��� ����Ͽ����ϴ�. \n");
			printf("�ȳ���������. \n\n");
			calculate[0]=P_calculate;
			printf("������ �ݾ� %d�� ���� ȯ�ҵǾ����ϴ�.\n", calculate[0]);
			exit(0);
		case 1:
			printf("������ �ݾ�: %d��\n\n", calculate[0]);
			i++; 
			Calculate();
			break;
		case 2:
			printf("����� �޴�â���� �̵��մϴ�. \n\n");
			calculate[0]+=(payment[opt]*num);
			DrinkList();
			DrinkSelect();
		default :
			printf("0��, 1��, 2������ �ٽ� �Է����ּ���. \n\n");
			return Balance();
	}
}

int DrinkReSelect(void)
{
	printf("\n");
	printf("�� �ٸ� ������� �����Ͻðڽ��ϱ�? \n\n");
	printf("0. �� �̻� �ֹ����� �ʰ� �����մϴ�. \n");
	printf("1. �� �ٸ� ������� �߰��� �ֹ��մϴ�. \n");
	printf("����(0�� Ȥ�� 1��): ");
	scanf("%d", &re_opt);
	
	printf("\n\n") ;
	
	switch(re_opt)
	{
		case 0:
			printf("�߰� �ֹ��� �����Ͽ����ϴ�. \n");
			printf("�ȳ���������. \n\n"); 
			printf("���� �ܾ� %d���� ��ȯ�մϴ�. \n\n", calculate[0]);
			exit(0);
		case 1:
			printf("����� �޴�â���� �̵��մϴ�. \n\n");
			DrinkList();
			DrinkSelect();
			break;
		default :
			printf("0�� Ȥ�� 1������ �ٽ� �Է����ּ���. \n\n");
			return DrinkReSelect();
	}
}

int main(void)
{
	Calculate();
	DrinkList();
	DrinkSelect();
	
	return 0;
}
