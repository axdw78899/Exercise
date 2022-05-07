#include<stdio.h>
int check_n_one(int a){
	int number;
	for (int i=0;i<8;i++){
		if( (a&(1<<i)) != 0)
			number++;
	}
	return number;
}

//�j��аO��1
int set_n_bit_1(int a,int n){
	return (a|(1<<n-1));
}
//����줸0��1
int set_n_bit_reverse(int a,int n){
	return (a^(1<<n-1));
}
//�j��аO��0
int set_n_bit_0(int a,int n){
	return (a&~(1<<n-1));
}
//���̧C�쪺1
int find_low_1_bit(int a){
	return a&-a;
}
//�Q��G�i�� 
void ten_to_two(int a){
	int i=0,n,count[32];
	n=a;
	while (n>0)
	{
		count[i] = n%2;
		i = i+1;
		n = n/2;
	}
	for(; i > 0; i--)
		printf("%d",count[i-1]);
	printf("\n");
}
int main(){
	int x=18;
	int i=0,a[32];
	printf("�Q�i��:");
	printf("%d\n",x);
	//��ܦ��G�i��
	//�C�����H2���᪺�l�� 
	printf("�G�i��:");
	ten_to_two(x);
	printf("��3��аO��1:\n");
	ten_to_two(set_n_bit_1(x,3));
	printf("��2��аO��0:\n");
	ten_to_two(set_n_bit_0(x,2));
	printf("�����2��:\n");
	ten_to_two(set_n_bit_reverse(x,2));
	
	printf("*****************************\n");
	printf("x=");
	ten_to_two(x);
	printf("�̧C�쪺1�b�� %d ��\n",find_low_1_bit(x));
	printf("�`�@�� %d �� 1\n",check_n_one(x));
	
}
