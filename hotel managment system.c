#include<stdio.h>
#include<conio.h>
struct hotel{
char name[20];
char address[20];
int phone;
char adhar[20];
float marks;
};

void set(void);
void show(void);
void menu(void);


int main(){
clrscr();
menu();


getch();
return(0);
}

void menu(){
char ch;
while(1){

int num;

printf("Welcome to Hotel Management System \n") ;
printf("Type 1 to add customer Data \n");
printf("Type 2 to show Customer Data \n");
scanf("%d",&num);
if(num==1){
set();
}
else
if(num==2){
show();

}
printf("Do you want to run the software again .... \n");
printf("type y for yes \n");
printf("type n for no \n");
scanf("%s",&ch);
if(ch=='y' || ch=='Y'){
continue;
}
else{
printf("thank you for using the software \n");
break;
}

}

}



void set(){
clrscr();

hotel a,b;
printf("Please enter the name address phone adhar of customer a \n");
scanf("%s",&a.name);
scanf("%s",&a.address);
scanf("%d",&a.phone);
scanf("%s",&a.adhar);
scanf("%f",&a.marks);


FILE *ptr;
ptr=fopen("Hotel_manage.dat","wb");
fwrite(&a,sizeof(struct hotel),1,ptr);
fclose(ptr);
}


void show(){
clrscr();

hotel b;
FILE *ptr;

ptr=fopen("Hotel_manage.dat","rb");
fread(&b,sizeof(struct hotel),1,ptr);


printf("the name of customer b is %s \n",b.name);
printf("The address of customer b  is %s \n",b.address);
printf("The phone of customer b is %d \n",b.phone);
printf("The adhar of customer b is %s \n",b.adhar);
printf("the marks of customer is %f \n",b.marks);

}