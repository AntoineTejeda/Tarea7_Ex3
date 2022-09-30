#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 4
void LlenaArray(float Array[N][M]);
void ComparaArray(float Array[N][M],int *x,int *y,float *venta);
int main()
{
    float Array[N][M],venta;
    int x,y;
    LlenaArray(Array);
    ComparaArray(Array,&x,&y,&venta);
    printf("El producto con mayor precio es; %f\n",Array[x][0]);
    printf("El producto con menor stock es; %f\n",Array[y][0]);
    printf("Total de venta esperada; %f",venta);
}

void LlenaArray(float Array[N][M])
{
    int i=0,x,y;
    for (i = 0; i < M; i++)
    {
        printf("Introduce la clave del producto: ");
        scanf("%f",&Array[i][0]);

        printf("Dame el precio del producto: ");
        scanf("%f",&Array[i][1]);

        printf("Dame los stock del producto: ");
        scanf("%f",&Array[i][2]);
    }

    for(x=0;x<M;x++)
    {
        for(y=0;y<N;y++)
        {
            printf("%f ",Array[x][y]);
        }
        printf("\n");
    }
}

void ComparaArray(float Array[N][M],int *x,int *y,float *venta)
{
    int i,Mayor=Array[0][1],Menor=Array[0][2];
    for(i=0;i<M;i++)
    {
        if(Array[i][1]>Mayor)
        {
            Mayor=Array[i][1];
            *x=i;
        }
        if(Array[i][2]<Menor)
        {
            Menor=Array[i][2];
            *y=i;
        }
        *venta=*venta+(Array[i][2]*Array[i][1]);
    }
}
