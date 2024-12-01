#include<stdio.h>

int main (){
    int Mang[100];
    int n;
    int sua, them;
    int vitrithem;
    int chon, chan, tongchan;

    printf("\nMENU\n");
    printf("1. Nh?p s? ph?n t? c?n nh?p và giá tr? các ph?n t? \n");
    printf("2. In ra giá tr? các ph?n t? dang qu?n lý\n");
    printf("3. In ra giá tr? các ph?n t? ch?n và tính t?ng\n");
    printf("4. In ra giá tr? l?n nh?t và nh? nh?t trong m?ng\n");
    printf("5. In ra các ph?n t? là s? nguyên t? trong m?ng và tính t?n\n");
    printf("6. Nh?p vào m?t s? và th?ng kê trong m?ng có bao nhiêu ph?n t? dó\n");
    printf("7. Thêm m?t ph?n t? vào v? trí ch? d?nh\n");  	
    printf("8. Thoát\n");     
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
                printf("Các ph?n t? ch?n: ");
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
                printf("Giá tr? l?n nh?t: %d\n", max);
                printf("Giá tr? nh? nh?t: %d\n", min);
                return 0;
            }
    	  }
    if (chon==5){
                int Tong = 0;
                printf("Các s? nguyên t?: ");
                for (int j = 0; j < n; j++) {
                if (Mang[j]) {
                printf("%d ", Mang[j]);
                Tong += Mang[j];
                }
                }
                printf("\nT?ng các s? nguyên t?: %d\n", Tong);
    	}
    if (chon==6){
    	        int x, count = 0;
                printf("Nh?p s? c?n th?ng kê: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (Mang[i] == x) count++;
                }
                printf("S? l?n xu?t hi?n c?a %d là: %d\n", x, count);
    	}
    if (chon==7){
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
    if (chon==8){
    	 return 0;
    	}
     
  return 0;
}
}
    	
