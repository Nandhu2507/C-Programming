#include <stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
    printf("Vowel");
  }
  else if(ch>='A'&&ch<='Z'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U' || ch>='a'&&ch<='z'&&ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
  {
  printf("Consonant");
  }
  else {
    printf("invalid");
  }
  return 0;
} 
