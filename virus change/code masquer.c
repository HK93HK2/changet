#include <stdio.h>
#include <stdint.h>
 
int main(void)
{
   /* FF FE + &cls */
   uint8_t s[7];
   fread(s, 7, 1, stdin);
   
   size_t c;
   uint8_t b[512];
   
   while ((c = fread(b, 1, 512, stdin)))
      fwrite(b, 1, c, stdout);
   
   return 0;
}