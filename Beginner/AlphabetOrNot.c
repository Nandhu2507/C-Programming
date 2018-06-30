#include <stdio.h>
int main()
{
  char input;
  scanf("%c",&input);
  if(input>='A'&& input<='Z' || input>='a'&&input<='z')
  {
    printf("Alphabet");
  }
  else
  {
    printf("No");
  }
  return 0;
}
