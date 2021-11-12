#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termio.h>
#define level 10
void print(int a[][4]);
void rand_sort(int a[][4]);
int compare(int a[][4], int e[][4], int stack);
int point(int a[][4]);
int getch(void) {
    int ch;
    struct termios buf;
    struct termios save;
    tcgetattr(0, &save);
    buf = save;
    buf.c_lflag &= ~(ICANON | ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;
    tcsetattr(0, TCSAFLUSH, &buf);
    ch=getchar();
    tcsetattr(0, TCSAFLUSH, &save);
    return ch;
}
int main(int argc, char *argv[])
{
	int a[4][4]={
		{1, 2, 3, 4}, 
		{5, 6, 7, 8}, 
		{9, 10, 11, 12}, 
		{13, 14, 15, 32} 
	};
  int e[4][4]={
		{1, 2, 3, 4}, 
		{5, 6, 7, 8}, 
		{9, 10, 11, 12}, 
		{13, 14, 15, 32} 
	};
  int b,c,d, stack=0;
	if(atoi(argv[1]) == 1){
    system("clear");
    print(a);
    while(compare(a,e,stack)){
    c=getch();
    system("clear");
    if(c==105){
      b=point(a);
      c=b+4;
      if(b/4!=3){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
    }
    else if(c==106){
      b=point(a);
      c=b+1;
      if(b%4!=3){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d; 
      stack++;
      }
    }
    else if(c==107){
      b=point(a);
      c=b-4;
      if(b/4!=0){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
    }
    else if(c==108){
      b=point(a);
      c=b-1;
      if(b%4!=0){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
     }
    else if(c==113)
      break;
    print(a);
    };
	}
  else if(atoi(argv[1])==2){
    rand_sort(a);
    system("clear");
    print(a);
    while(compare(a,e,stack)){
    c=getch();
    printf("%c\n",c);
    system("clear");
    if(c==105){
      b=point(a);
      c=b+4;
      if(b/4!=3){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
    }
    else if(c==106){
      b=point(a);
      c=b+1;
      if(b%4!=3){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
    }
    else if(c==107){
      b=point(a);
      c=b-4;
      if(b/4!=0){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
    }
    else if(c==108){
      b=point(a);
      c=b-1;
      if(b%4!=0){
      d=a[b/4][b%4];
      a[b/4][b%4]=a[c/4][c%4];
      a[c/4][c%4]=d;
      stack++;
      }
     }
    else if(c==113)
      break;
    print(a);
    }
  }
}
void print(int a[][4])
{
  for(int i=0;i<16;i++){	
    if(a[i/4][i%4] == 32){
		  printf("%4c", a[i/4][i%4]);
      if(i%4 == 3)
        printf("\n");
    }
    else{
      printf("%4d", a[i/4][i%4]);
      if(i%4 == 3)
        printf("\n");
    }
  }
}
void rand_sort(int a[][4])
{
  int tmp, r1, r2;
  srand(time(NULL));
  for(int i=0;i<level;i++){
    r1=rand()%15;
    r2=rand()%15;
    tmp=a[r1/4][r1%4];
    a[r1/4][r1%4]=a[r2/4][r2%4];
    a[r2/4][r2%4]=tmp;
  }
}
int compare(int a[][4], int e[][4], int stack)
{
  for(int i=0;i<16;i++){
    if(a[i/4][i%4]!=e[i/4][i%4])
      return 1;
    else if(stack==0)
      return 1;
  }
  printf("축하합니다.\n");
  sleep(3);
  return 0;
}
int point(int a[][4]){
  for(int j=0;j<16;j++)	
    if(a[j/4][j%4] == 32)
      return j;
  return 0;
}
