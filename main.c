#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// #01
	
	char *pc;
	int *pi;
	double *pd;
	pc = (char *)10000;
	pi = (int*)10000;
	pd = (double *)10000;
	
	printf("증가 전 : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	printf("증가 후 : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	
	
	// #02 
	
	
	int i = 10 ;
	int *ptr = &i;
	
	printf("i = %i, ptr = %p\n", i, ptr);
	(*ptr)++;
	printf("i = %i, ptr = %p\n", i, ptr); 
	*ptr++; //헷갈리니까 이렇게 쓰지 말기. 포인터 이동하고 그 값을 리턴하긴 할 것. 
	printf("i = %i, ptr = %p\n", i, ptr); 
	
	
	
	// #03
	
	char buffer[8];
	double *pd;
	int *pi;
	
	pd = (double *)buffer;
	*pd = 3.14;
		printf("%f\n", *(double*)buffer );
	
	pi = (int *)buffer;
	*pi = 123;
	*(pi+1) = 456;
		printf("%d %d\n", *(int*)buffer, *((int*)buffer + 1) );
	
	
	
	// #04
	

	int i = 100;
	int *p = &i;
	int **q = &p;
	
	*p = 200;
		printf("i = %d, *p = %d, **q = %d\n", i, *p ,**q);
		
	**q = 300;
		printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);


	
	 // #05
	 
	char *proverb="All that glisters is not gold.";
	void setPointer(char **q)
	{
		*q = proverb;
	}
	int main(void)
	{
		char *p ="zzz";
		setPointer(&p);
		printf("%s \n", p);
	return 0;
	}


//#06

//함수를 만들어야 함

int sum(int a, int b)
{
	return a+b;
 } 
 
int sub(int a, int b)
{
	return a-b;
 } 
 
int mul(int a, int b)
{
	return a*b;
 }
  
int divd(int a, int b)
{
	return a/b;
 } 
 
 int main(void){
 	char op; 
 	int a;
 	int b;
 	
 	int (*pf)(int, int);
 	printf("calculate what : ");
 	scanf("%d %c %d", &a, &op, &b);
 	
 	switch(op)
 	{
 		case '+' :
 			pf = sum;
 			break;
 		
		case '-' :
 			pf = sub;
 			break;	
 		
		case '*' :
 			pf = mul;
 			break;	
 		
		case '/' :
 			pf = divd;
 			break;
 		
		default : 
 			pf = sum;
 			break;
	 }
 	
 	printf("%d\n", pf(a,b));
 	//포인터를 쓴 의미가 없다
	  	
	  	
	  	
	  	
	  	
 	return 0;
 }
