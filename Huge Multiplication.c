#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


char * multiply(char [],char[]);
  int main(){
  char a[10000];
  char b[10000];
  char *c;
  int lena,lenb;
  int i;
  printf("first number: ");
  scanf("%s",a);
  printf("secondd number: ");
  scanf("%s",b);
  printf("Product: ");
  c = multiply(a,b);
  printf("%s",c);
return 0;
}

char * multiply(char a[],char b[]){
 static char prod[10000];
 char c[10000];
 char bla[10000];
 int lena,lenb;
 int i,j,k=0,x=0,y,sum;
 long int carry=0;
 long total = 0;
 lena=strlen(a)-1;
 lenb=strlen(b)-1;
 
 for(i=0;i<=lena;i++)
 {
    a[i] = a[i] - 48;
 }
for(i=0;i<=lenb;i++)
 {
    b[i] = b[i] - 48;
 }

 for(i=lenb;i>=0;i--)
 {
    carry=0;
    for(j=lena;j>=0;j--)
      {
    bla[k++] = (b[i]*a[j] + carry)%10;
    carry = (b[i]*a[j]+carry)/10; 
      }
      bla[k++] = carry;
    
  
    x++;
 for(y = 0;y<x;y++)
 {
    bla[k++] = 0;
   
 }
}
 
 k=0;
 carry=0;
 for(i=0;i<lena+lenb+2;i++)
 {
  sum = 0;
  y=0;
  for(j=1;j<=lenb+1;j++)
    {
      if(i <= lena+j)
        {
          sum = sum + bla[y+i];
        }
        y+=j+lena+1;
    }
    c[k++] = (sum+carry) %10;
    carry = (sum+carry)/10;
  }
  c[k] = carry;
  j=0;
  for(i=k-1;i>=0;i--)
  {
    prod[j++]=c[i] + 48;
  }
  prod[j]='\0';
  return prod;
}
