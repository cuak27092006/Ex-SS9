#include<stdio.h>

int main(){
int Mang[100];
int n;
int themvao;
int vitrithem;

printf ("moi ban nhap vao so phan tu muon nhap :");
scanf ("%d", &n);
if (n>100||n<0){
printf ("phan tu nhap vao ko hop le :");
return 0;
}
printf ("nhap vao %d phan tu\n",n);
for(int i=0; i<n; i++){
	printf ("phan tu thu %d la : " , i + 1);
	scanf ("%d", &Mang[i]);
}
printf("Mang la: ");
for(int i=0; i<n; i++){
	printf ("%d, " , Mang[i]);
}
printf ("\n");
printf ("nhap vao gia tri muon thêm : ");
scanf ("%d", &themvao);
printf ("vi tri muon chen vao : ");
scanf ("%d", &vitrithem);
for (int j = n; j>vitrithem; j-- );{
   Mang[n] = Mang [n-1];
   n++;
   }
Mang[vitrithem]=themvao;
for(int z=0; z<n; z++){
	printf ("%d, " ,Mang[z]);
}
return 0;
}

   
