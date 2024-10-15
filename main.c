#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//请输出101到200中所有的素数,并说出有多少个.
//要想找出所有的素数,就必须保证他只能被1和自己整除,所以我们可以先用for循环找出所有的所有的数
//然后再让他们除以比他小的所有数,如果不能整除,就说明他是一个素数.
int primenumber(int a){
int i;
for(i=2;i<=a;i++){
			if(a%i==0){ 
				break;//这里因为能够整除,所以跳出循环; 
			}
		}
	if(a==i){//但是也有可能是到最后a=i;结束循环,这时a是一个质数; 
		return a;
	}else {
		return 0;
	}
}
int main(){
	int primenumber(int a);
	int a,i,number;
	number=0;
	for(a=101;a<=200;a++){
		if(a==primenumber(a)){
		printf("%d是一个质数\n",a);
		number++;
		}
	}
	printf("101到200一共有%d个质数",number);

	
	
		
	
	return 0;
} 


