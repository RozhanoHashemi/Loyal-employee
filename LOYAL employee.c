#include <stdio.h>
#include <stdlib.h>
struct emp{
char fname[100];
char Lname[100];
int year;
int month;
float sal;
}e[100];
int main()
{int maxyear=0;
   int maxsal=0;
    int n,z=0,y=0,g=0;
scanf("%d",&n);

   float sum=0,avg=0;
   for(int i=0; i<n; i++){
    scanf("%s",e[i].fname);
      scanf("%s",e[i].Lname);
      scanf("%d",&e[i].year);
      scanf("%d",&e[i].month);
     scanf("%f",&e[i].sal);

   }

   for(int i=0; i<n;i++){
   if(maxsal<e[i].sal){
    z=i;
    maxsal=e[i].sal;}}

   printf("%s %s",e[z].fname,e[z].Lname);
    printf("\n");

     int m1,m2;
     m1=e[0].year;
m2=e[0].month;


for(int i=1; i<n ;i++) {

	if (e[i].year<=m1 ){
	 if (e[i].month<m2)

       g=i;

	}}

   printf("%s %s",e[g].fname,e[g].Lname);
   printf("\n");

   for(int i=0; i<n;i++){

sum+=e[i].sal;
}
  avg=sum/n;

   printf("%f",avg);
    return 0;
}
