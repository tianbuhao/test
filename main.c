#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>//������������ƽ��,ƽ����sqrt int k=(int)sqrt((double)m) 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����һ���ַ���ͳ�Ƴ�����Ӣ���ַ�,�ո���,����,�Լ������ַ� 
int main(){
	char c;
	int letter=0;
	int number=0;
	int sum=0;
	c=getchar();
	while(c!='\n'){
		if(c>='a'&&c<='z'||c>='A'&&c<='Z'){//ԭ�����Ӧ��ASC||�� 
			letter++;
		}else if(c>='0'&&c<='9'){ 
			number++;
		}else if(c=' '){
			sum++;
		}
		printf("%c",c);
		c=getchar();//getcharֻ������һ���ַ�,���Ҫ���ѭ��; 
	}
	printf("\nӢ���ַ���%d��\n",letter);
	printf("������%d��\n",number);
	printf("�ո���%d��\n",sum);
	return 0;
}


