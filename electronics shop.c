#include <stdio.h>

int main()
{
  int keyboards_count, drives_count, b;
  scanf ("%d%d%d", &b, &keyboards_count, &drives_count);
  int keyboards[keyboards_count], drives[drives_count];
  for (int i = 0; i < keyboards_count; i++)
    scanf ("%d", &keyboards[i]);
  for (int i = 0; i < drives_count; i++)
    scanf ("%d", &drives[i]);

  int max = -1;
  int s = 0;
 
  for (int i = 0; i < keyboards_count; i++)
    {
      for (int j = 0; j < drives_count; j++)
        {
          s = keyboards[i] + drives[j];

          if (s > max && s <= b)
            max = s;
        }
    }
  printf ("%d", max);
}
