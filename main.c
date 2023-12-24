#include<regx52.h>
#include"..\Lib\Delay.h"

unsigned char code Font5x7_0[] = {0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E};

unsigned char code Font5x7[10][7] = {{0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E}, // Font so 0
                                    {0x1F, 0x04, 0x04, 0x04, 0x14, 0x0C, 0x04}, // Font so 1
																		{0x1F, 0x08, 0x04, 0x02, 0x01, 0x11, 0x0E}, // Font so 2
																		{0x0E, 0x11, 0x01, 0x06, 0x01, 0x11, 0x0E}, // Font so 3
																		{0x02, 0x1F, 0x12, 0x08, 0x04, 0x02, 0x01}, // Font so 4
																		{0x1E, 0x01, 0x01, 0x01, 0x1E, 0x10, 0x1F}, // Font so 5
																		{0x0E, 0x11, 0x11, 0x1E, 0x10, 0x11, 0x0E}, // Font so 6
																		{0x04, 0x04, 0x04, 0x02, 0x01, 0x01, 0x1F}, // Font so 7
																		{0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E}, // Font so 8
																		{0x0E, 0x01, 0x01, 0x0F, 0x11, 0x11, 0x0E}}; // Font so 9

void main(){
	   unsigned char i,j,cnt;
     while(1){
// Bai 2
   for(cnt =0;cnt<10;cnt++)
   {
       for(j =0;j<142;j++)// Delay du 1s
		   {
				  for(i =0;i<7;i++)
			    {
					P0 = Font5x7[cnt][i];
					P3 = 0x00;
					Delay_ms(1);
					P3 = 0x01 << i;
				  }  
			 }	 
	 }		 
			 
			 
// Bai 1			 
/* Cach 2 : Dung vong lap sieu ngan 			 
     unsigned char i;
			  for(i =0;i<7;i++)
			  {
					P0 = Font5x7_0[i];
					P3 = 0x00;
					Delay_ms(1);
					P3 = 0x01 << i;
				}	
/*
/* Cach 1 : Lam thu cong		 
			  P0 = Font5x7_0[0];
			  P3_0 = 0;            
			  Delay_ms(1);
			  P3_0 = 1;            
			  
			  P0 = Font5x7_0[1];
			  P3_1 = 0;            
			  Delay_ms(1);
			  P3_1 = 1;   
 
        P0 = Font5x7_0[2];
			  P3_2 = 0;            
			  Delay_ms(1);
			  P3_2 = 1;  

        P0 = Font5x7_0[3];
			  P3_3 = 0;            
			  Delay_ms(1);
			  P3_3 = 1;  

        P0 = Font5x7_0[4];
			  P3_4 = 0;            
			  Delay_ms(1);
			  P3_4 = 1;   
 
        P0 = Font5x7_0[5];
			  P3_5 = 0;            
			  Delay_ms(1);
			  P3_5 = 1;  

        P0 = Font5x7_0[6];
			  P3_6 = 0;            
			  Delay_ms(1);
			  P3_6 = 1; 
*/			  
     }
}