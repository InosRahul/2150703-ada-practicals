#include<stdio.h>
#include<conio.h>

int i,j,temp,n,a[25],b[25];

void hsortmax(int a[],int n);
void hsortmin(int b[],int n);
void main(){
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter elements in array:");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		hsortmax(a,i);
	}
	printf("Enter elements in array:");
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
		hsortmin(b,i);
	}
	for(i=1;i<=n;i++){
		printf("\nSorted elements in max heap are %d \t",a[i]);
	}
	for(i=1;i<=n;i++){
		printf("\nSorted elements in min heap are %d \t",b[i]);
	}

getch();
}

void hsortmax(int a[], int i){
	//int temp,i;
	temp = a[i];
	while((i>1) && (a[i/2])<temp){
		a[i] = a[i/2];
		i = i/2;
	}
	a[i]=temp;
}
void hsortmin(int b[], int i){
	temp = b[i];
	while((i>1) && (b[i/2])>temp){
		b[i] = b[i/2];
		i = i/2;
	}
	b[i] = temp;
}
