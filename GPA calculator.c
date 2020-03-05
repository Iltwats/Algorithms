#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[30];
    float marks;
    int subject=0;
    gets(s);
    strupr(s);
    deleteblankspaces(s);
    printf("%s",s);
     for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' && s[i + 1] == '+')
        {
            marks += 10;
            subject++;
            i++;
        }
        else if (s[i])
        {
            marks += (74 - s[i]);
            subject++;
        }
    }
        float ss = (marks / subject);
         printf("\nYour GPA= %0.2f",ss); 
                
}

void deleteblankspaces(char *s)
{
	int  i,k=0;
 
	 for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==' '|| s[i]=='\t')
     	{
		  k++;
		  i--;
	    }
     	
    }
}