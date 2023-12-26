#include<stdio.h>
 int main(){
 	int ngay, thang, nam;

 printf("Input dd mm yyyy: ");
 scanf("%d%d%d", &ngay, &thang, &nam);

 
 if (thang < 1 || thang > 12 || nam<0 || nam>9999) {
   printf("Invalid date\n");
   return 0;
}
if(ngay<1){printf("Invalid date\n");
return 0;
}

 int songay = 31;  

 switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    	songay=31;
    	break;
    case 4: case 6: case 9: case 11:
     songay = 30;
     break;
   case 2:
     if(nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
     songay=29;
	 else songay=28;}
	 
	 if(ngay>songay||ngay<=0){
	 printf("Invalid date");
	 }else{printf("valid date");
	 }
 }

 
	  	
	  
 
