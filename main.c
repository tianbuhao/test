#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>//可以用来计算平方,平方用sqrt int k=(int)sqrt((double)m) 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//输入一行字符请统计出其中英文字符,空格数,数字,以及其他字符 
int main(){
	char c;
	int letter=0;
	int number=0;
	int sum=0;
	c=getchar();
	while(c!='\n'){
		if(c>='a'&&c<='z'||c>='A'&&c<='Z'){//原理就是应用ASC||码 
			letter++;
		}else if(c>='0'&&c<='9'){ 
			number++;
		}else if(c=' '){
			sum++;
		}
		printf("%c",c);
		c=getchar();//getchar只能输入一个字符,因此要多次循环; 
	}
	printf("\n英文字符有%d个\n",letter);
	printf("数字有%d个\n",number);
	printf("空格有%d个\n",sum);
	return 0;
}


