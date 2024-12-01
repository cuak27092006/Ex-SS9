#include<stdio.h>

int main (){
    int Mang[100];
    int n;
    int sua, them;
    int vitrisua, vitrithem, vitrixoa;
    int chon;

    printf("\nMENU\n");
    printf("1. Nh?p vào m?ng\n");
    printf("2. Hi?n th? m?ng\n");
    printf("3. Thêm ph?n t?\n");
    printf("4. S?a ph?n t?\n");
    printf("5. Xóa ph?n t?\n");     
    printf("6. Thoát\n");
    printf("L?a ch?n c?a b?n: ");
    scanf("%d", &chon);
    if(chon=1){
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
         }
         if(chon=2){
         	printf("Mang la: ");
            for(int i=0; i<n; i++){
	        printf ("%d, " , Mang[i]);
	        return 0;
            }
            }
            if (chon=3){
		    printf ("\n");
            printf ("nhap vao gia tri muon thêm : ");
            scanf ("%d", &them);
            printf ("vi tri muon chen vao : ");  
		    scanf ("%d", &vitrithem);
            for (int j = n; j>vitrithem; j-- );{
            Mang[n] = Mang [n-1];
            n++;
            }
            Mang[vitrithem]=them;
            for(int z=0; z<n; z++){
            printf ("%d, " ,Mang[z]);
            return 0;
	        }
            }
			if (chon=4){
			printf ("\n");
            printf ("nhap vao gia tri sua  : ");
            scanf ("%d", &sua);
            printf ("vi tri muon sua vao : ", n-1);
            scanf ("%d", &vitrisua);
            Mang[vitrisua]=sua;
            for(int z=0; z<n; z++){
           	printf ("%d, " ,Mang[z]);
          	return 0;
            }
            }
            if (chon=5){printf ("\n");

            printf ("vi tri muon xoa vao : ", n-1);
            scanf ("%d", &vitrixoa);
            for (int j = vitrixoa; j < n - 1; j++) {
            Mang[j] = Mang[j + 1]; 
            }
            n--;

            for(int z=0; z<n; z++){
	        printf ("%d, " ,Mang[z]);
            return 0;
            }
            }
            if (chon=6){
            return 0;
            }
            }  
         	

