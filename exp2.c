#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{

 int patternlength,textlength,replacelength,i,j,k;
 char* text=(char*)malloc(sizeof(char));
 char* pat=(char*)malloc(sizeof(char));
 char* rep=(char*)malloc(sizeof(char));
 printf("Enter the text");
 scanf(" %[^\n]",text);
 printf("Enter the pattern");
 scanf(" %[^\n]",pat);
 printf("Enter the replace string");
 scanf(" %[^\n]",rep);
 textlength=strlen(text);
 patternlength=strlen(pat);
 replacelength=strlen(rep);
 for(i=0;i<=textlength-patternlength;i++)
 {
  for(j=0;j<patternlength;j++)
  {
   if(text[i+j]!=pat[j])
   {
     break;
   }
  }
  if(j==patternlength)
  {
   printf("position found at %d\n",i);
   break;
  }
 }

if(patternlength==replacelength)
{
  for(k=0;k<replacelength;k++)
  {
   text[i]=rep[k];
   i++;
  }
  printf("\n Updated text is :%s",text);
}
else
{
 printf("not possible");
}
}     
   
 
 
 

