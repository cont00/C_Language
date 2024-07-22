#include <stdio.h>
#include <stdlib.h>

int opt, re_opt, i, calculate, price;
int payment[]={0, 1500, 1200, 1700, 1300, 1400, 1100, 1600};
char D_Co[]={"코카콜라500ml"}, D_Sik[]={"식혜500ml"}, D_Rad[]={"RadBull 300ml"}, D_Fan[]={"오렌지환타500ml"};
char D_Wel[]={"웰치스포드500ml"}, D_Mil[]={"밀키스300ml"}, D_Orenge[]={"오렌지주스600ml"};

void DrinkList(void);
int Num(void);
int Calculate(void);
int Balance(void);
int DrinkSelect(void);
int DrinkReSelect(void);

void DrinkList(void)
{
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃0. 되돌아가기		     ┃ 4. %-12s (%6d원)┃ \n", D_Fan, payment[4]);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃1. %-12s (%6d원) ┃ 5. %-12s (%6d원)┃ \n", D_Co, payment[1], D_Wel, payment[5]);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃2. %-12s (%6d원)  ┃ 6. %-12s    (%6d원)┃ \n", D_Sik, payment[2], D_Mil, payment[6]);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃3. %-12s (%6d원) ┃ 7. %-12s (%6d원)┃ \n", D_Rad, payment[3], D_Orenge, payment[7]);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

int Num(void)
{	
	printf("구매 갯수 입력: ");
	scanf("%d", &i);
	printf("\n");
	
	return i;
}

int Calculate(void)
{
	printf("결제하실 금액을 입력하세요: ");
	scanf("%d", &calculate);
	
	printf("\n");
	
	printf("결제금액: %d원 \n", calculate);
	if(calculate<price)
	{
		calculate=price-calculate;
		Balance();
	}
	else
	{
	printf("거스름돈: %d원 \n", calculate-price);
	}
	
	return calculate;
}

int Balance(void)
{
	printf("\n");
	printf("금액이 부족합니다. \n\n");
	printf("부족한 금액: %d원\n\n", calculate);
	printf("결제금액이 부족하여 결제가 취소되었습니다. \n\n");
	printf("재결제를 위해서 결제창으로 되돌아갑니다. \n\n");
	
	return Calculate();
}

int DrinkSelect(void)
{
	printf("음료수 선택: ");
	scanf("%d", &opt);
	printf("\n");
	
	switch(opt)
	{
		case 0:
			printf("구매를 취소하셨습니다. \n\n");
			break;
		case 1:
			printf("코카콜라를 선택하셨습니다. \n\n");
			Num();
			printf("코카콜라 %d캔 주문하셨습니다. \n", i);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 2:
			printf("식혜를 선택하셨습니다. \n\n");
			Num();
			printf("식혜 %d캔 주문하셨습니다. \n", i);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 3:
			printf("RadBull를 선택하셨습니다. \n\n");
			Num();
			printf("RadBull %d캔 주문하셨습니다. \n", i);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 4:
			printf("오렌지환타를 선택하셨습니다. \n\n");
			Num();
			printf("오렌지환타 %d캔 주문하셨습니다. \n", i);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 5:
			printf("웰치스포도를 선택하셨습니다. \n\n");
			Num();
			printf("웰치스포도 %d캔 주문하셨습니다. \n", i);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 6:
			printf("밀키스를 선택하셨습니다. \n\n");
			Num();
			printf("밀키스 %d캔 주문하셨습니다. \n", i);
			printf("구매금액: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;
		case 7:
			printf("오랜지주스를 선택하셨습니다. \n\n");
			Num();
			printf("오랜지주스 %d팩 주문하셨습니다. \n", i);
			printf("구매금액: %d원 입니다. \n\n", payment[opt]*i);
			price+=(payment[opt]*i);
			DrinkReSelect();
			break;			
		default :
			printf("품절된 메뉴를 선택하셨거나 없는 메뉴를 선택하셨습니다. \n");
			printf("다시 선택해주세요. \n\n"); 
			return DrinkSelect();
	}
}

int DrinkReSelect(void)
{
	printf("\n");
	printf("또 다른 음료수를 선택하시겠습니까? \n\n");
	printf("0. 모든 주문은 취소하고 종료합니다. \n");
	printf("1. 또 다른 음료수를 추가로 주문합니다. \n");
	printf("2. 결제메뉴로 이동합니다. \n\n");
	printf("선택(0 ~ 2번): ");
	scanf("%d", &re_opt);
	
	printf("\n\n") ;
	
	switch(re_opt)
	{
		case 0:
			printf("모든 주문을 취소하였습니다. \n");
			printf("안녕히가세요. \n\n"); 
			exit(0);
		case 1:
			printf("음료수 메뉴창으로 이동합니다. \n\n");
			DrinkList();
			DrinkSelect();
			break;
		case 2:
			printf("결제메뉴로 이동합니다. \n\n");
			printf("구매가격: %d원 입니다. \n\n", price);
			Calculate();
			break;
		default :
			printf("0번, 1번, 2번으로 다시 입력해주세요. \n\n");
			return DrinkReSelect();
	}
}

int main(void)
{
	DrinkList();
	DrinkSelect();
	
	return 0;
}
