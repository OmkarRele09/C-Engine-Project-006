#include <stdio.h>
int main(){
int speed;
printf("Enter the speed of your car\n");
scanf("%d" , &speed);
if(speed>100){
printf("Fine: You are overspeeding");
}
else{
printf("Safe driving");
}
    return 0;
}