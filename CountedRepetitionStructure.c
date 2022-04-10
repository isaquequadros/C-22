//By isaac, engineering student
//Science, Fatherland, Family

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	int num, cont;

	printf("University A\n", 161);
	printf("subject: 220409 - IEE \n");
	printf("Student: Isakovic\n\n\n");
	printf("enter a positive integer: ");
	
	scanf("%d", &num);
	
	printf("\n The smallest odd numbers that %d are:\n", num);
	
	if(num%2==0)
		num=num-1;
	for(cont=num; cont>=1; cont=cont-2)
		printf("%d", cont);
	getch();
}
