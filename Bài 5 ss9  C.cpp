#include<stdio.h>

int main (){
    int Mang[100];
    int n;
    int sua, them;
    int vitrithem;
    int chon, chan, tongchan;

    printf("\nMENU\n");
    printf("1. Nh?p s? ph?n t? c?n nh?p v� gi� tr? c�c ph?n t? \n");
    printf("2. In ra gi� tr? c�c ph?n t? dang qu?n l�\n");
    printf("3. In ra gi� tr? c�c ph?n t? ch?n v� t�nh t?ng\n");
    printf("4. In ra gi� tr? l?n nh?t v� nh? nh?t trong m?ng\n");
    printf("5. In ra c�c ph?n t? l� s? nguy�n t? trong m?ng v� t�nh t?n\n");
    printf("6. Nh?p v�o m?t s? v� th?ng k� trong m?ng c� bao nhi�u ph?n t? d�\n");
    printf("7. Th�m m?t ph?n t? v�o v? tr� ch? d?nh\n");  	
    printf("8. Tho�t\n");     
    printf("L?a ch?n c?a b?n: ");
    scanf("%d", &chon);
    if (chon==1){
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
	      return 0;
        }
    	} 
    if (chon==2){
    	printf("Mang la: ");
            for(int i=0; i<n; i++){
	        printf ("%d, " , Mang[i]);
	        return 0;
    	}
    if (chon==3){
                printf("C�c ph?n t? ch?n: ");
                for (int i = 0; i < n; i++) {
                if (Mang[i] % 2 == 0) {
                printf("%d ", Mang[i]);
                tongchan += Mang[i];
                }
                 return 0;
    	}
    if (chon==4){
    	        int max = Mang[0], min = Mang[0];
                for (int i = 1; i < n; i++) {
                if (Mang[i] > max) max = Mang[i];
                if (Mang[i] < min) min = Mang[i];
                }
                printf("Gi� tr? l?n nh?t: %d\n", max);
                printf("Gi� tr? nh? nh?t: %d\n", min);
                return 0;
            }
    	  }
    if (chon==5){
                int Tong = 0;
                printf("C�c s? nguy�n t?: ");
                for (int j = 0; j < n; j++) {
                if (Mang[j]) {
                printf("%d ", Mang[j]);
                Tong += Mang[j];
                }
                }
                printf("\nT?ng c�c s? nguy�n t?: %d\n", Tong);
    	}
    if (chon==6){
    	        int x, count = 0;
                printf("Nh?p s? c?n th?ng k�: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (Mang[i] == x) count++;
                }
                printf("S? l?n xu?t hi?n c?a %d l�: %d\n", x, count);
    	}
    if (chon==7){
    	    printf ("\n");
            printf ("nhap vao gia tri muon th�m : ");
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
    if (chon==8){
    	 return 0;
    	}
     
  return 0;
}
}
    	
