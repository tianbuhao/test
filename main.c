#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�����101��200�����е�����,��˵���ж��ٸ�.
//Ҫ���ҳ����е�����,�ͱ��뱣֤��ֻ�ܱ�1���Լ�����,�������ǿ�������forѭ���ҳ����е����е���
//Ȼ���������ǳ��Ա���С��������,�����������,��˵������һ������.
int primenumber(int a){
int i;
for(i=2;i<=a;i++){
			if(a%i==0){ 
				break;//������Ϊ�ܹ�����,��������ѭ��; 
			}
		}
	if(a==i){//����Ҳ�п����ǵ����a=i;����ѭ��,��ʱa��һ������; 
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
		printf("%d��һ������\n",a);
		number++;
		}
	}
	printf("101��200һ����%d������",number);

	
	
		
	
	return 0;
} 


