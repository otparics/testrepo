#include <stdio.h>
int my_strlen(char *s)
{
char *p = s;
   while (*p)
      ++p;
   return (p - s);
}
int dummy()
{
printf("This is a dummy function");
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
