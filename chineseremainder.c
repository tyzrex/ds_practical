#include <stdio.h>
#include <math.h>
#define max 10
int inverse(int a, int b)
{
    int s1 = 0, s2 = 1, t1 = 1, t2 = 0;
    int q, r, s, t;
    while (b != 0)
    {
        q = a / b;
        r = a % b;
        s = s2 - q * s1;
        t = t2 - q * t1;
        a = b;
        b = r;
        s2 = s1;
        s1 = s;
        t2 = t1;
        t1 = t;
    }
    return s2;
}
void main()
{
    int n, i, M, a[max], m[max], s[max], Mk[max];
    char q;
    do
    {
        printf("\n Enter the number of equations: ");
        scanf("%d", &n);
        printf("\n Enter the integers a and m one line at a time: ");
        for (i = 1; i <= n; i++)
            scanf("%d%d", &a[i], &m[i]);
        M = 1;
        for (i = 1; i <= n; i++)
            M = M * m[i];
        for (i = 1; i <= n; i++)
            Mk[i] = M / m[i];
        for (i = 1; i <= n; i++)
            s[i] = inverse(Mk[i], m[i]);
        int x = 0;
        for (i = 1; i <= n; i++)
            x = x + a[i] * Mk[i] * s[i];
        x = x % M;
        printf("\n The solution of the given system is %d+%dk where k is an integer.", x, M);
        printf("\n Do you want to continue?(y/n): ");
        scanf(" %c", &q);
    } while (q == 'Y');
}