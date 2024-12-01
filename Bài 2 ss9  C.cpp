#include<stdio.h>

int main(){
int Mang[100];
int n;
int sua;
int vitrisua;

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
printf ("nhap vao gia tri sua  : ");
scanf ("%d", &sua);
printf ("vi tri muon sua vao : ", n-1);
scanf ("%d", &vitrisua);
 Mang[vitrisua]=sua;
for(int z=0; z<n; z++){
	printf ("%d, " ,Mang[z]);
}
return 0;
}

   
