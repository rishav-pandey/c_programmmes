//RISHAV PANDEY, 
//2105733
// enum question 

#include <stdio.h>

enum week
{ Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int
main ()
{

  enum week today;
  today = Wednesday;
  printf ("%d day", today + 1);
  return 0;

}