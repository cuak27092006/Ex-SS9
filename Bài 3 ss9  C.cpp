#include<stdio.h>

int main(){
int Mang[100];
int n;
int vitrixoa;

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

printf ("vi tri muon xoa vao : ", n-1);
scanf ("%d", &vitrixoa);
 for (int j = vitrixoa; j < n - 1; j++) {
        Mang[j] = Mang[j + 1]; 
    }
    n--;

for(int z=0; z<n; z++){
	printf ("%d, " ,Mang[z]);
}
return 0;
}

   
