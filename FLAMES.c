#include <stdio.h>
#include <string.h>


int main(void) {
     char name1[100], name2[100];
	   int lname1, lname2,um=0,m=0,i,j,tc,fc=5,length=1,k;
	   char f[]="flames";
	 
	   printf("Enter name 1\n");
  	 gets(name1);
  	 printf("Enter name 2\n");
	   gets(name2);
	 
	   int count = 0;
  
   
      for (int i = 0; name1[i]; i++)
        if (name1[i] != ' ')
            name1[count++] = name1[i]; 
        name1[count] = '\0';
    
    count = 0;
    
    for (int i = 0; name2[i]; i++)
        if (name2[i] != ' ')
            name2[count++] = name2[i]; 
            name2[count] = '\0';
        
  printf("%s\n",name1);
	printf("%s\n",name2);
	
	 lname1 = strlen(name1);
	 lname2 = strlen(name2);
	 tc=lname1+lname2;
	 
	 for(i=0;i<lname1;i++)
	  {
	    
	    for(j=0;j<lname2;j++)
	     {
	       
	         if(name1[i]==name2[j])
	          {
	            name1[i]=name2[j]=-1;
              m=m+1;
              break;
	          }
	     }
	  }
	  
	   lname1 = strlen(name1);
	   lname2 = strlen(name2);
	   tc=lname1+lname2;
	   printf("%s\n",name1);
		 printf("%s",name2);
	   um=tc-(m*2);
	   printf("%d , %d ,%d,%d",lname1,lname2,m,um);
	   
	   for (i=0;;i++)
      {
        if(length==(um))
          {
            for(k=i;f[k]!='\0';k++)
              {
                f[k]=f[k+1]; 
              }
              f[k+1]='\0';
              fc=fc-1;
              i=i-1;
              length=0;
             
            }
          if(i==fc)
            {
              i=-1;
            }
          if(fc==0)
           {
              break;
            }
          length++;
      }
        if(f[0]=='e')       printf("ENEMY");
        else if (f[0]=='f') printf("FRIEND");
        else if(f[0]=='m')  printf("MARRY");
        else if(f[0]=='l')  printf("LOVE ");
        else if(f[0]=='a')  printf("AFFECTION");
        else                printf("SISTERS/BROTHERS");
        
        
	 return 0;
}
