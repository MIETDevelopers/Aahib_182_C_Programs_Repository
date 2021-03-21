#include<stdio.h>
 
int main(){
   int n, first = 0, second = 1, next, c; //Referance to formulas of the series.
 
   printf("Enter the number of terms\n");
   scanf("%d",&n); //Scan (read) the number written by user.
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )//Referance to formulas of the series.
   {
      if ( c <= 1 )
         next = c;
      else
      {
         //Formula to print the series.
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);//provides the output.
   }
   return 0;
}
