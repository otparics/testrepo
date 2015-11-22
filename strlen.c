#include <stdio.h>
int my_strlen( char *s)
{
char *p = s;
   while (*p)
      ++p;
   return (p - s);
}
int dummy1()
{
printf("/nThis is dummy 1 function/n")
}
int dummy2()
{
printf("/nAdded dummy 2 function/n")
}
int main(void)
{
   int i;
   char *s[] = {
      "Git tutorials",
      "Tutorials Point"
   };
for (i = 0; i < 2; ++i)
printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
return 0; }
￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼
