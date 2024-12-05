#include<stdio.h>
#define MAX 100
int main(){
	int arr[MAX];
	int n;
	int choice;
	do{
		printf("MENU\n");
		printf("1.nhap so phan tu va gia tri cho mang\n");
		printf("2.in ra gia tri cac phan tu trong mang theo dang(arr[0]=1,arr[1]=5,,,)\n");
		printf("3.dem so luong cac so hoan hao co trong mang biet so hoan hao la so co tong cac  uoc bang chinh so do\n");
		printf("4.tim gia tri lon thu 2 trong mang  khong dc sap xep mang\n");
		printf("5.them 1 phan tu vao vi tri ngau nhien trong mang  phan tu  moi them vao mang va vi tri them  vao phai do nguoi  dung nhap vao\n");
		printf("6. xoa phan tu  tai 1  vi tri cu the ( nguoi dung nhap vi tri )\n");
		printf("7.sap xep theo mang thu tu tang dan(insertion sort)\n");
		printf("8.cho nguoi dung  nhap 1 phan tu  tim kiem xem phan tu do co trong mang hay ko(binary search)\n");
		printf("9. sap xep  lai mang  va hien thi ra toan bo  phan tu co trong  mang sao cho toan bo so chan dung trc so le\n");
		printf("10.dao nguoc thu  tu cua  cac phan tu co trong mang \n");
		scanf("%d",&choice);
		
		
		
	if(choice==1){
				printf("nhap 1 so bat ki: ");
				scanf("%d",&n);
		if(n<1 || n>MAX){
				printf("ko hop le\n");
			return 1;
			}
			for(int i=0;i<n;i++){
				printf("nhap gia tri phan tu %d : ",i);
				scanf("%d",&arr[i]);
				printf("\n");
		}
		}
	if(choice==2){
		for(int i=0;i<n;i++){
			printf("arr[%d]= %d",i,arr[i]);
			printf("\t");
		}
		printf("\n");
		
	}
	
	if(choice==4){
		int maxx,so_lon;
		for(int i=0;i<n;i++){
			if(arr[i]>maxx){
				maxx=arr[i];
			}
		}
		for(int i=0;i<n;i++){
			if(arr[i]!=maxx && arr[i]>so_lon){
				so_lon=arr[i];
			}
		}
		printf("so lon thu 2 trong mang la: %d",so_lon);
		printf("\n");
	}	
	
	if(choice==7){
			int length = n;
			for(int i=0;i<length;i++){
			printf("%d\t",arr[i]);
	}
			for(int i=1;i<length;i++){
			int key =arr[i];
			int j=i-1;
			while (j>=0 && key<arr[j]){
				arr[j+1]=arr[j];
				j--;
		}	
			arr[j+1]=key;
		
	}
			printf("\n");
			for(int i=0;i<length;i++){
			printf("%d\t",arr[i]);
	}
			printf("\n");
	}
	
	if(choice==9){
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				printf("%d\t",&arr[i]);
			}
		}
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				printf("\t%d\t",&arr[i]);
			}
		}
	}
		}while(choice!=11);
	
 			return 0;
 }

