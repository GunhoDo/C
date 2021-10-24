#include <stdio.h>
#include <time.h>
#include <string.h>
int main(void){
	char a[4];
	char b[10];
	int c;
	struct tm *t;
	time_t now;
	now=time(NULL);
	t=localtime(&now);
	if (t->tm_wday==0)
		strcpy(a,"일");
	else if (t->tm_wday==1)
		strcpy(a,"월");
	else if (t->tm_wday==2)
		strcpy(a,"화");
	else if (t->tm_wday==3)
		strcpy(a,"수");
	else if (t->tm_wday==4)
		strcpy(a,"목");
	else if (t->tm_wday==5)
		strcpy(a,"금");
	else 
		strcpy(a,"토");
	if (t->tm_hour >=12){
		strcpy(b,"오후");
		c=t->tm_hour-12;
	}
	else {
		strcpy(b,"오전");
		c=t->tm_hour;
	}
	printf("오늘은 %d년 %d월 %d일 %s요일 입니다.\n",t->tm_year+1900,t->tm_mon+1,t->tm_mday,a);
	printf("현재 시간은 %s %d시 %d분 %d초입니다.",b,c,t->tm_min,t->tm_sec); 
	return 0;
}
