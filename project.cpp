#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(){
	int RED;
//	textcolor(5);
    int h,m,s;
    int d=1000;
    printf("set time:\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12||m>60||s>60){
       printf("Enter valid time\n");
        exit(0);
    }
    while(1){
    	s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
   // printf("Hi");
   printf("\n\x1b[31m Clock : \x1b[0m");
    printf("\n\x1b[36m %02d:%02d:%02d \x1b[0m",h,m,s);
    Sleep(d);
    system("cls");
}

}
