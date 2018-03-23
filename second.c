#include <stdio.h>
#include <limits.h>

int
main (void)
{
  int d_cn = SCHAR_MIN, d_cx = SCHAR_MAX, du_cx = UCHAR_MAX,
      d_inn = INT_MIN, d_inx = INT_MAX, du_inx = UINT_MAX,
      d_shn = SHRT_MIN, d_shx = SHRT_MAX, du_shx = USHRT_MAX,
      d_lgn = LONG_MIN, d_lgx = LONG_MAX, du_lgx= ULONG_MAX;
      
  printf ("тип char знаковый: %i до %i\n беззнаковый: 0 до %i\n", d_cn, d_cx, du_cx);
  printf ("тип int  знаковый: %i до %i\n беззнаковый: 0 до %i\n", d_inn, d_inx, du_inx);
  printf ("тип short знаковый: %i до %i\n беззнаковый: 0 до %i\n", d_shn, d_shx, du_shx);
  printf ("тип long знаковый: %i до %i\n беззнаковый: 0 до %i\n", d_lgn, d_lgx, du_lgx);
  return 0;
}