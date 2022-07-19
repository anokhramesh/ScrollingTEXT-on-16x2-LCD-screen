
         //LCD module connection
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;

sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D7_Direction at TRISB5_bit;
//end LCD module connection

char txt1[]= "WELCOME TO" ;
char txt2[] = "ANOKH-AUTOMATION" ;
char i ;            // loop variable
void main() {
     Lcd_Init();           //initialize lcd module;
     Lcd_Cmd(_LCD_CLEAR);     //clear display
     Lcd_Cmd(_LCD_CURSOR_OFF);    // cursor off

     Lcd_Out(1,3,txt1);   //write text 1st row
     Lcd_Out(2,1,txt2);    //write text 2nd row
     delay_ms(2000);
     // Moving text
     for(i=0;i<4;i++){
                      Lcd_Cmd(_LCD_SHIFT_RIGHT);
                      Delay_ms(500);
                      }
     while(1){
              for(i=0;i<8;i++){
                               Lcd_Cmd(_LCD_SHIFT_LEFT);
                               Delay_ms(500);
                               }
              for(i=0;i<8;i++){
                               Lcd_Cmd(_LCD_SHIFT_RIGHT);
                               Delay_ms(500);
                               }
              }



}






