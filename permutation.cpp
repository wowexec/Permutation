#include <stdio.h>
#include <stdlib.h>
 
void   perm(char array[], int n, int m);
 
int main(void)
{
    char   array[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
 
    perm(array, 6, 3);
    return 0;
}

void perm(char array[], int n, int m)
{
    int    i, j, k, flag, cnt, tmp;
    int    *buf, *arr;
 
    buf = (int*) calloc(n, sizeof(int));
    arr = (int*) calloc(m, sizeof(int));
 
    for (i = 0; i < m; i++)
        buf[i] = 1;
 
    while (1) {
        for (i = 0, j = 0; i < n; i++) {
            if (buf[i])
                arr[j++] = i;
        }
        while (1) {
            for (i = 0; i < m; i++)
                printf("%c", array[arr[i]]);
            printf(" ");
            for (i = m - 1 - 1; i >= 0; i--)
                if (arr[i] < arr[i + 1])
                    break;
            if (i == -1) break;
 
            for (j = i + 1, k = j; j < m; j++)
                if (arr[j] > arr[i] && arr[j] < arr[k])
                    k = j;
 
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
 
            for (j = i + 1, i = m - 1; j < i; j++, i--) {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
        printf("\n");
 
        flag = 1;
        for (i = n - m; i < n; i++) {
            if (buf[i] == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) break;
 
        for (i = n - 1; i > 0; i--) {
            if (buf[i] == 0 && buf[i - 1] == 1) {
                buf[i] = 1;
                buf[i - 1] = 0;
                break;
            }
        }
 
        if (buf[n - 1]) {
            for (j = n - 1, cnt = 0; j > i; j--) {
                if (buf[j] == 0)
                    break;
                cnt++;
            }
            for (j = i + 1; j < n; j++) {
                if (j < i + 1 + cnt)
                    buf[j] = 1;
                else
                    buf[j] = 0;
            }
        }
    }
}
