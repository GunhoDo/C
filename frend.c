#include <stdio.h>
#include <string.h>
int main(void){
	struct frend{
		char name[20];
		char email[20];
		char num[20];
	};
   struct frend f1[10]={{"ze","a@ssu.com","01012345678"},{"qw","b@ssu.com","01042145233"},{"er","c@ssu.com","01048239843"},{"es","d@ssu.com","01048392043"},{"xc","e@ssu.com","01048375683"},{"vf","f@ssu.com","01078549541"},{"bg","g@ssu.com","01058573934"},{"ni","h@ssu.com","0104839904"},{"me","i@ssu.com","01048577432"},{"qd","j@ssu.com","01087658349"}};
	char word[20];		
	int res;
	printf("이름검색:");
	scanf("%s",word);
	for(int i=0;i<10;i++){
		res=strcmp(f1[i].name,word);
		if (res==0)
			printf("email:%s\nnumber:%s\n",f1[i].email,f1[i].num);
	}
	printf("전체검색:");
	scanf("%s",word);
	for(int i=0;i<10;i++){
		res=strcmp(f1[i].name,word);
		if (res==0)
			printf("name:%s\nemail:%s\nnumber:%s\n",f1[i].name,f1[i].email,f1[i].num);
		res=strcmp(f1[i].email,word);
		if (res==0)
			printf("name:%s\nemail:%s\nnumber:%s\n",f1[i].name,f1[i].email,f1[i].num);
		res=strcmp(f1[i].num,word);
		if (res==0)
			printf("name:%s\nemail:%s\nnumber:%s\n",f1[i].name,f1[i].email,f1[i].num);
	}
}
