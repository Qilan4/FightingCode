/*��������Ackmann������A(x��y)�У�x��y�������ǷǸ�����������ֵ����Ϊ��*/

#include<stdio.h>

int Ack(int m,int n);
int cnt=1;
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",Ack(m,n));
	return 0;
}

int Ack(int m,int n)
{
	if(m==0)
		return n+1;
	else if(n==0)
			return 	Ack(m-1,1);
		 else
		 	return Ack(m-1,Ack(m,n-1));		
}
