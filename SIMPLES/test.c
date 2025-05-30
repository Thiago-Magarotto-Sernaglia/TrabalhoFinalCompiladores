#include <stdio.h>
#include <stdlib.h>

int main(){
   int a;
   int b=5;
   int c;
   int f;
   int i;
   float d;
java.lang.ArrayIndexOutOfBoundsException: Index 65533 out of bounds for length 128
	at SimplesLexer.next_token(Unknown Source)
   scanf("%d",&a);
   scanf("%d",&c);
   scanf("%d",&f);
   scanf("%f",&d);	at java_cup.runtime.lr_parser.scan(lr_parser.java:366)

   b=(a+b)*c/c;
   f=5+2;
   c=c+f*5;
   printf("\n%d",b);
   printf("\n%d",f);
   printf("\n%d",c);
   printf("\n%f",d);
	at java_cup.runtime.lr_parser.parse(lr_parser.java:693)
   if(b>f){   
	at CompiladorSimples.main(Unknown Source)
      printf("\n%d",b);
   }
   else{   
      printf("\n%d",f);
   }
   if(a==5){   
      if(b>5){      
         if(c<10){         
            printf("\n%d",a+b+c);
         }
      }
   }
   while((b>f&&a<1000)||a<f){   
      printf("\n%d",f*10);
      f=f-1;
      while((b==10)){      
         printf("\n%d",b);
         b=b-2;
      }
   }
   for(i = 1;i < 10;i += 2){   
      printf("\n%d",i);
   }
   for(i = 10;i > 1;i += -1){   
      printf("\n%d",i);
   }
