#include<stdio.h>
int check_n_one(int a){
	int number;
	for (int i=0;i<8;i++){
		if( (a&(1<<i)) != 0)
			number++;
	}
	return number;
}

//強制標記成1
int set_n_bit_1(int a,int n){
	return (a|(1<<n-1));
}
//反轉位元0或1
int set_n_bit_reverse(int a,int n){
	return (a^(1<<n-1));
}
//強制標記成0
int set_n_bit_0(int a,int n){
	return (a&~(1<<n-1));
}
//找到最低位的1
int find_low_1_bit(int a){
	return a&-a;
}
//找到最高位的1
int getHibit(int x){
    int n = 31;
    if (x >> 16 == 0){n = n - 16; x = x << 16;}
    if (x >> 24 == 0){n = n - 8; x = x << 8;}
    if (x >> 28 == 0){n = n - 4; x = x << 4;}
    if (x >> 30 == 0){n = n - 2; x = x << 2;}
    if (x >> 31 == 0){n = n - 1;}
    return n+1;
}
//十轉二進位 
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
	printf("十進位:");
	printf("%d\n",x);
	//表示成二進位
	//每次除以2之後的餘數 
	printf("二進位:");
	ten_to_two(x);
	printf("第3位標記成1:\n");
	ten_to_two(set_n_bit_1(x,3));
	printf("第2位標記成0:\n");
	ten_to_two(set_n_bit_0(x,2));
	printf("反轉第2位:\n");
	ten_to_two(set_n_bit_reverse(x,2));
	
	printf("*****************************\n");
	printf("x=");
	ten_to_two(x);
	printf("最低位的1在第 %d \n",find_low_1_bit(x));
	printf("最高位的1在第 %d \n",getHibit(x));
	printf("總共有 %d 個1\n",check_n_one(x));

	
}
