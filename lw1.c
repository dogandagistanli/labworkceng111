#include <stdio.h>
int main(){
    int number,maxValue,temp;
printf("Hello please enter 10 numbers to find out the maximum value: ");

//önce sayıyı gireceğiz
//maksimumu sayıya eşitle1
//sonra sayı al eğer büyükse maksimumu tekrar eşitle

    scanf("%d",&number);
    maxValue = number;
for(temp=0; temp<9; temp++){
    scanf("%d",&number);
    if(number>maxValue)
    maxValue = number;


}
printf("Max value is = %d",maxValue);









}



    
