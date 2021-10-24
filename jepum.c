#include <stdio.h>
union one_dollar{
	int one;
	double dollar;
};
int main(void){
	union one_dollar PMP={600000};
	union one_dollar MP3={153000};
	union one_dollar SmartPhone={.dollar=520.4};
	union one_dollar TV={.dollar=430.20};
	union one_dollar Navigator={350000};
	union one_dollar Laptop={.dollar=1950.00};
	int a;
	double b;
	printf("보유금액과 환율을 입력하세요.\n");
	scanf("%d%lf",&a,&b);
	printf("보유금액 : %d\n환율 : %.f\n",a,b);
	SmartPhone.one=SmartPhone.dollar*b;
	TV.one=TV.dollar*b;
	Laptop.one=Laptop.dollar*b;
	printf("구매 가능한 제품은 다음과 같습니다.\n");
	if (a>=PMP.one)
		printf("PMP %d원\n",PMP.one);
	if (a>=MP3.one)
		printf("MP3 %d원\n",MP3.one);
	if (a>=SmartPhone.one)
		printf("SmartPhone %d원\n",SmartPhone.one);
	if (a>=TV.one)
		printf("TV %d원\n",TV.one);
	if (a>=Navigator.one)
		printf("Navigator %d원\n",Navigator.one);
	if (a>=Laptop.one)
		printf("Laptop %d원\n", Laptop.one);
	return 0;
}
