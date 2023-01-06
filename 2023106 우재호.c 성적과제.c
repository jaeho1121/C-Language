#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#define N 10

void print_array(int a[N][3], double b[], int c[], int type);
void exam(int a[N][3], double b[]);
void sort(int a[N][3], double b[], int c[]);


int main(void)
{
    int i;
    int seongjeok[N][3];
    int index[N];
    double average[N];

    srand((unsigned)time(NULL));
    for (i = 0; i < N; i++)
    {
        index[i] = i;
    }

    exam(seongjeok, average);

   
    printf("��ȣ\tkor\teng\tmath\n");
    print_array(seongjeok, average, index, 0);

    printf("\n����������� ���!\n");
    printf("---------------------------------------\n");
    printf("��ȣ\tkor\teng\tmath\tavg\n");
    print_array(seongjeok, average, index, 1);

    sort(seongjeok, average, index);
    printf("\n��������� �������� ����\n");
    printf("---------------------------------------\n");
    printf("��ȣ\tkor\teng\tmath\tavg\n");
    print_array(seongjeok, average, index, 1);

    system("PAUSE");
    return 0;
}


void exam(int a[N][3], double b[])
{
    int i, j, sum;

    for (i = 0; i < N; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 101;
            sum += a[i][j];
        }
        b[i] = sum / 3.0;
    }
}

void sort(int a[N][3], double b[], int c[])
{
    int i, j;
    int tmp;
    double temp;

    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (b[i] > b[j])
            {
                tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;

                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

void print_array(int a[N][3], double b[], int c[], int type)
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        printf("%2d", c[i] + 1);
        for (j = 0; j < 3; j++)
        {
            printf("\t%3d", a[c[i]][j]);
        }
        if (type) printf("\t%2.1lf", b[i]);
        printf("\n");
    }
}