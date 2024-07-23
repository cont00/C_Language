#include <stdio.h>
#include <stdlib.h>

int calculate[]={}, P_calculate;
int opt, re_opt, num, i=1, j, count;
int opt_count[]={}, num_count[]={};
int payment[]={0, 1500, 1200, 1700, 1300, 1400, 1100, 1600};
char D_List[][20]={{" "}, {"코카콜라500ml"}, {"식혜500ml      "}, {"RadBull 300ml"}, {"오렌지환타500ml"}, {"웰치스포드500ml"}, {"밀키스300ml"}, {"오렌지주스600ml"}};

int Calculate(void);
void DrinkList(void);
int DrinkSelect(void);
int Num(void);
int Balance(void);
int DrinkReSelect(void);
int Receipt(void);

int Calculate(void)
{
	printf("투입금액: ");
	scanf("%d", &calculate[i]);
	
	printf("\n");
	
	P_calculate=calculate[1];
	calculate[0] += calculate[i]; 
	
	return calculate[0];
}

void DrinkList(void)
{
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃0. 되돌아가기		       ┃ 4. %-12s  (%6d원)┃ \n", D_List[4], payment[4]);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃1. %-12s   (%6d원) ┃ 5. %-12s  (%6d원)┃ \n", D_List[1], payment[1], D_List[5], payment[5]);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃2. %-12s (%6d원) ┃ 6. %-12s     (%6d원)┃ \n", D_List[2], payment[2], D_List[6], payment[6]);
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃3. %-12s   (%6d원) ┃ 7. %-12s  (%6d원)┃ \n", D_List[3], payment[3], D_List[7], payment[7]);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

int DrinkSelect(void)
{
	printf("음료수 선택: ");
	scanf("%d", &opt);
	printf("\n");
	
	opt_count[j]=opt;
	
	switch(opt)
	{
		case 0:
			printf("구매를 취소하셨습니다. \n");
			printf("투입한 금액을 반환합니다. \n\n");
			printf("반환된 금액: %d원 \n\n", calculate[0]);
			break;
		case 1:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d캔 주문하셨습니다. \n", D_List[opt], num);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 2:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d캔 주문하셨습니다. \n", D_List[opt], num);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 3:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d캔 주문하셨습니다. \n", D_List[opt], num);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 4:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d캔 주문하셨습니다. \n", D_List[opt], num);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 5:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d캔 주문하셨습니다. \n", D_List[opt], num);
			printf("구매가격: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 6:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d캔 주문하셨습니다. \n", D_List[opt], num);
			printf("구매금액: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;
		case 7:
			printf("%s를 선택하셨습니다. \n\n", D_List[opt]);
			Num();
			printf("%s %d팩 주문하셨습니다. \n", D_List[opt], num);
			printf("구매금액: %d원 입니다. \n\n", payment[opt]*num);
			calculate[0]-=(payment[opt]*num);
			if(calculate[0]<0)
			{
				Balance();
			}
			else
			{
				printf("남은 잔액: %d원\n\n", calculate[0]);
			}
			DrinkReSelect();
			break;			
		default :
			printf("품절된 메뉴를 선택하셨거나 없는 메뉴를 선택하셨습니다. \n");
			printf("다시 선택해주세요. \n\n"); 
			return DrinkSelect();
	}
}

int Num(void)
{	
	printf("구매 갯수 입력: ");
	scanf("%d", &num);
	printf("\n");
	
	num_count[j]=num;
	
	return num;
}

int Balance(void)
{
	int Ba_Opt=0;
	
	printf("\n");
	printf("투입한 금액이 부족합니다. \n\n");
	printf("부족한 금액: %d원\n\n", calculate[0]);
	
	printf("투입한 금액이 부족하여 결제가 일시정지되었습니다. \n\n");
	
	printf("모든 주문을 취소하시기를 원하시면 0번, \n");
	printf("금액을 추가로 투입하시기를 원하시면 1번, \n");
	printf("주문을 취소하고 음료수 주문리스트로 돌아가시길 원하시면 2번을 눌러주세요. \n");
	printf("선택: "); 
	scanf("%d", &Ba_Opt);
	
	printf("\n");
	
	switch(Ba_Opt)
	{
		case 0:
			printf("모든 주문을 취소하였습니다. \n");
			printf("안녕히가세요. \n\n");
			calculate[0]=P_calculate;
			printf("투입한 금액 %d원 전부 환불되었습니다.\n", calculate[0]);
			exit(0);
		case 1:
			printf("부족한 금액: %d원\n\n", calculate[0]);
			i++; 
			Calculate();
			break;
		case 2:
			printf("음료수 메뉴창으로 이동합니다. \n\n");
			calculate[0]+=(payment[opt]*num);
			DrinkList();
			DrinkSelect();
		default :
			printf("0번, 1번, 2번으로 다시 입력해주세요. \n\n");
			return Balance();
	}
}

int DrinkReSelect(void)
{
	printf("\n");
	printf("추가주문을 하시겠습니까? \n\n");
	printf("0. 더 이상 주문을 하지 않고 종료합니다. \n");
	printf("1. 음료수를 추가로 주문합니다. \n");
	printf("선택(0번 혹은 1번): ");
	scanf("%d", &re_opt);
	
	printf("\n\n") ;
	
	switch(re_opt)
	{
		case 0:
			printf("추가 주문을 종료하였습니다. \n");
			printf("안녕히가세요. \n\n"); 
			printf("남은 잔액 %d원을 반환합니다. \n\n", calculate[0]);
			Receipt();
			exit(0);
		case 1:
			count++;
			j++;
			printf("음료수 메뉴창으로 이동합니다. \n\n");
			DrinkList();
			DrinkSelect();
			break;
		default :
			printf("0번 혹은 1번으로 다시 입력해주세요. \n\n");
			return DrinkReSelect();
	}
}

int Receipt(void)
{
	printf("\n");
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃          영       수       증        ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━┳━━━━━━━━┳━━━━━━━━━━━┫\n");
	for(j=0; j<=count; j++)
	{
		printf("┃ %-12s ┃  %3d캔 ┃  %6d원 ┃\n", D_List[opt_count[j]], num_count[j], payment[opt_count[j]]*num_count[j]);
	}
	printf("┗━━━━━━━━━━━━━━━━━┻━━━━━━━━┻━━━━━━━━━━━┛\n");
}

int main(void)
{
	Calculate();
	DrinkList();
	DrinkSelect();
	
	return 0;
}
