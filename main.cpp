#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sex,age;
	printf("�п�J�ʧO(�k�ͽп�J1,�k�ͽп�J2):\n");
	scanf("%d",&sex);
	printf("�п�J�~��:");
	scanf("%d",&age);
	if((sex==1)&&(age>=18))
	 printf("�h���B�a!");
	else if((sex==1)&&(age<18))
	 printf("�A�w�w"); 
	if((sex==2)&&(age>=16))
	 printf("�h���B�a!");
	else if((sex==2)&&(age<16))
	 printf("�A�w�w");  
	return 0;
} 
