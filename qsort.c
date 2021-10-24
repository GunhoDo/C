#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *p, const void *q);
int main(void)
{
	char word[11];
	char *a[10];
	for(int i=0;i<10;i++){
		scanf("%[^\n]",word);
		getchar();
		a[i]=(char*)calloc(strlen(word)+1,sizeof(char));
		strcpy(a[i],word);
	}
	qsort(a,10,sizeof(char*),compare);
	for(int j=0;j<10;j++){
		printf("%s\n",a[j]);
		free(a[j]);
	}
	return 0;
}
int compare(const void *p, const void *q){
	return strcmp(*(char **)p, *(char**)q);
}
