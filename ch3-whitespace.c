/* ch3-whitespace.c
 * demoed whitespace
 * 05/01/2014 
 * bagustris, bagustris@yahoo.com
 */
#include <stdio.h>

main()
{
  float s,t;

  printf ("how do you make?");
  scanf (" %f", &s);

  t = .33 * s;
  printf ("you owe %.2f in taxes.\n", t);
  return 0;
}
