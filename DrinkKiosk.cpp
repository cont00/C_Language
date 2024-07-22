#include <stdio.h>
#include <stdlib.h>

int opt, re_opt, i, calculate, price;
int payment[]={0, 1500, 1200, 1700, 1300, 1400, 1100, 1600};
char D_Co[]={"��ī�ݶ�500ml"}, D_Sik[]={"����500ml"}, D_Rad[]={"RadBull 300ml"}, D_Fan[]={"������ȯŸ500ml"};
char D_Wel[]={"��ġ������500ml"}, D_Mil[]={"��Ű��300ml"}, D_Orenge[]={"�������ֽ�600ml"};

void DrinkList(void);
int Num(void);
int Calculate(void);
int Balance(void);
int DrinkSelect(void);
int DrinkReSelect(void);

void DrinkList(void)
{
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��0. �ǵ��ư���		     �� 4. %-12s (%6d��)�� \n", D_Fan, payment[4]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��1. %-12s (%6d��) �� 5. %-12s (%6d��)�� \n", D_Co, payment[1], D_Wel, payment[5]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��2. %-12s (%6d��)  �� 6. %-12s    (%6d��)�� \n", D_Sik, payment[2], D_Mil, payment[6]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
	printf("��3. %-12s (%6d��) �� 7. %-12s (%6d��)�� \n", D_Rad, payment[3], D_Orenge, payment[7]);
	printf("��������������������������������������������������������������������������������������������������������������������������\n");
}

int Num(void)
{	
	printf("���� ���� �Է�: ");
	scanf("%d", &i);
	printf("\n");
	
	return i;
}

int Calculate(void)
{
	printf("�����Ͻ� �ݾ��� �Է��ϼ���: ");
	scanf("%d", &calculate);
	
	printf("\n");
	
	printf("�����ݾ�: %d�� \n", calculate);
	if(calculate<price)
	{
		calculate=price-calculate;
		Balance();
	}
	else
	{
	printf("�Ž�����: %d�� \n", calculate-price);
	}
	
	return calculate;
}

int Balance(void)
{
	printf("\n");
	printf("�ݾ��� �����մϴ�. \n\n");
	printf("������ �ݾ�: %d��\n\n", calculate);
	printf("�����ݾ��� �����Ͽ� ������ ��ҵǾ����ϴ�. \n\n");
	printf("������� ���ؼ� ����â���� �ǵ��ư��ϴ�. \n\n");
	
	return Calculate();
}

int DrinkSelect(void)
{
	printf("����� ����: ");
	scanf("%d", &opt);
	printf("\n");
	
	switch(opt)
	{
		case 0:
			printf("���Ÿ� ����ϼ̽��ϴ�. \n\n");
			break;
		case 1:
			printf("��ī�ݶ� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("��ī�ݶ� %dĵ �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 2:
			printf("������ �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("���� %dĵ �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 3:
			printf("RadBull�� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("RadBull %dĵ �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 4:
			printf("������ȯŸ�� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("������ȯŸ %dĵ �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 5:
			printf("��ġ�������� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("��ġ������ %dĵ �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���Ű���: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 6:
			printf("��Ű���� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("��Ű�� %dĵ �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���űݾ�: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 7:
			printf("�������ֽ��� �����ϼ̽��ϴ�. \n\n");
			Num();
			printf("�������ֽ� %d�� �ֹ��ϼ̽��ϴ�. \n", i);
			printf("���űݾ�: %d�� �Դϴ�. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;			
		default :
			printf("ǰ���� �޴��� �����ϼ̰ų� ���� �޴��� �����ϼ̽��ϴ�. \n");
			printf("�ٽ� �������ּ���. \n\n"); 
			return DrinkSelect();
	}
}

int DrinkReSelect(void)
{
	printf("\n");
	printf("�� �ٸ� ������� �����Ͻðڽ��ϱ�? \n\n");
	printf("0. ��� �ֹ��� ����ϰ� �����մϴ�. \n");
	printf("1. �� �ٸ� ������� �߰��� �ֹ��մϴ�. \n");
	printf("2. �����޴��� �̵��մϴ�. \n\n");
	printf("����(0 ~ 2��): ");
	scanf("%d", &re_opt);
	
	printf("\n\n") ;
	
	switch(re_opt)
	{
		case 0:
			printf("��� �ֹ��� ����Ͽ����ϴ�. \n");
			printf("�ȳ���������. \n\n"); 
			exit(0);
		case 1:
			printf("����� �޴�â���� �̵��մϴ�. \n\n");
			DrinkList();
			DrinkSelect();
			break;
		case 2:
			printf("�����޴��� �̵��մϴ�. \n\n");
			printf("���Ű���: %d�� �Դϴ�. \n\n", price);
			Calculate();
			break;
		default :
			printf("0��, 1��, 2������ �ٽ� �Է����ּ���. \n\n");
			return DrinkReSelect();
	}
}

int main(void)
{
	DrinkList();
	DrinkSelect();
	
	return 0;
}
