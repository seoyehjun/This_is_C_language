#define _CRT_NO_SECURE_WARNINGS_
#include<stdio.h>

int main(void)
{
	int dodo = 70;                                      //또또바 단가
	int kong = 30;                                      //꽁꽁바 단가
	int dodoc;
	int kongc;
	int bill;

	printf("또도면 몇개를 사실건지요?: ");
	scanf("%d", &dodoc);
	printf("꽁꽁바 몇개를 사실것인지요?: ");
	scanf("%d", &kongc);
	printf("돈은 얼마를 넣으실건지요?: ");
	scanf("%d", &bill);

	int dodotot = dodoc * dodo;                          //또또면의 총가격
	int kongtot = kong * kongc;                          //콩콩바의 총가격
	int change = bill - (dodotot + kongtot);             //체인지
	
	int c500 = change / 500;                            //여기서 부터 거스름돈 계산 포인트(it's change caculate program)
	int c100 = c500 / 100;
	int c50 = c100 / 50;
	int c10 = c50 / 10;

	
	printf("또또면 전채금액:%d\n", dodotot);                
	printf("꽁꽁바 전채금액:%d\n", kongtot);
	printf("거스름돈:%d\n", change);  
    printf("거스름돈 동전의 최소 개수\n500원%d개,100원%d개,50원%d개,10원%d개", c500 , c100, c50, c10 );

	return 0;
}