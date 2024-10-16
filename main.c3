#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//汉诺塔 
//假设有三根柱子 a,b,c  
//原理就是想办法把最大的盘子挪到c,所以我们的思路就是先把剩下的x-1个盘子先挪到b点
//再把最大的挪到c点,最后把剩下的x-1个盘子挪到c点 
void s(int x,char a,char b,char c){//无参函数 
	if(x==1){
		printf("%c->%c\n",a,c);//如果只有一个盘子,则直接从a移动到c就可以,注意这里a与c都是在指变量a与变量c 
	}else {
		s(x-1,a,c,b);//原理是递归函数 这里我们可以简单理解为将x-1个盘子从a借助c移动到b 
		printf("%c->%c\n",a,c);//详细是因为由于abc的顺序替换,导致后面所有abc的顺序都会发生变化 
		s(x-1,b,a,c);//同理这里是将x-1个盘子再从b借助a移动到c 
	}	
}
int main(){
	void s(int x,char a,char b,char c);
	int x=5;
	char a='a';
	char b='b';
	char c='c';
	s(x,a,b,c);
	return 0;
}
