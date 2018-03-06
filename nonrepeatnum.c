#include <stdio.h>
int main()
{
    int array[50];
    int *ptr;
    int i, j, k, s, n;
 
   
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    s= n;
    ptr = array;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (*(ptr + i) == *(ptr + j))
            {
                k = j;
                s--;
                while (k < s)
                {
                    *(ptr + k) = *(ptr + k + 1);
                    k++;
                }
                j = 0;
            }
        }
    }
   
    for (i = 0; i < s; i++)
    {
        printf(" %d", array[i]);
    }
    return 0;
}
