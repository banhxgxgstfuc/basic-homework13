#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sex,age;
	printf("請輸入性別(男生請輸入1,女生請輸入2):\n");
	scanf("%d",&sex);
	printf("請輸入年齡:");
	scanf("%d",&age);
	if((sex==1)&&(age>=18))
	 printf("去結婚吧!");
	else if((sex==1)&&(age<18))
	 printf("再緩緩"); 
	if((sex==2)&&(age>=16))
	 printf("去結婚吧!");
	else if((sex==2)&&(age<16))
	 printf("再緩緩");  
	return 0;
} 
