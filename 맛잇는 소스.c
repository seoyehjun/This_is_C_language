#define _CRT_NO_SECURE_WARNINGS_
#include<stdio.h>

int main(void)
{
	int dodo = 70;                                      //�Ƕǹ� �ܰ�
	int kong = 30;                                      //�ǲǹ� �ܰ�
	int dodoc;
	int kongc;
	int bill;

	printf("�ǵ��� ��� ��ǰ�����?: ");
	scanf("%d", &dodoc);
	printf("�ǲǹ� ��� ��ǰ�������?: ");
	scanf("%d", &kongc);
	printf("���� �󸶸� �����ǰ�����?: ");
	scanf("%d", &bill);

	int dodotot = dodoc * dodo;                          //�ǶǸ��� �Ѱ���
	int kongtot = kong * kongc;                          //������� �Ѱ���
	int change = bill - (dodotot + kongtot);             //ü����
	
	int c500 = change / 500;                            //���⼭ ���� �Ž����� ��� ����Ʈ(it's change caculate program)
	int c100 = c500 / 100;
	int c50 = c100 / 50;
	int c10 = c50 / 10;

	
	printf("�ǶǸ� ��ä�ݾ�:%d\n", dodotot);                
	printf("�ǲǹ� ��ä�ݾ�:%d\n", kongtot);
	printf("�Ž�����:%d\n", change);  
    printf("�Ž����� ������ �ּ� ����\n500��%d��,100��%d��,50��%d��,10��%d��", c500 , c100, c50, c10 );

	return 0;
}