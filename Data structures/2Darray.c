#include <studio.h>
int main()
{
int numbers[2][3];
int rows=sizeof(numbers)/sizeof(numbers[0]);
int columns==sizeof(numbers[0])/sizeof(numbers[0][0]);
printf(" rows %d\n",rows);
printf(" columns %d\n",columns);
 numbers[0][0]=1;
 numbers[0][1]=2;
 numbers[0][2]=3;
 numbers[1][0]=4;
 numbers[1][1]=5;
 numbers[1][2]=6;
 
for(i=0;i<2;i++){

  for(j=0;j<3;j++){
   printf("%d",numbers[i][j]);
  
  }
printf("\n");


}



 return 0;
}
