#include <stdio.h>
#include <stdlib.h>
			//Metodo de Newton
int main() //Willian O. de Arruda RA0030481523034
{
    float a, b, c, d; // Vari�veis da fun��o
    float x0 = 0., xn = 0., Fxn = 0., Fdxn = 0., E = 0.; // x inicial e outras variaveis usadas pelo sistema
    int k = 0; // numero de itera��es

    printf("Seja a fun��o no formato: Ax�+Bx�-Cx+D entre com o valor de A:\n");
    scanf("%f", &a);
    printf("Seja a fun��o no formato: Ax�+Bx�-Cx+D entre com o valor de B:\n");
    scanf("%f", &b);
    printf("Seja a fun��o no formato: Ax�+Bx�-Cx+D entre com o valor de C:\n");
    scanf("%f", &c);
    printf("Seja a fun��o no formato: Ax�+Bx�-Cx+D entre com o valor de D:\n");
    scanf("%f", &d); // receber valores da fun��o
    printf("Digite o valor de x:"); // recebe valor de x
    scanf("%f", &xn);
    printf("Digite o valor da precis�o OBS(use . em vez de ,): ");
    scanf("%f", &E);

    do
        {
            x0 = xn;
            Fxn = (a*( x0 * x0 * x0 )) + (b*(x0*x0) - (c*x0) + d); //Calcula a fun��o f(x)
            Fdxn = ((3*a)*x0*x0)+((2*b)*x0)-c; //Calcula a derivada f'(x)
            xn = x0 - ( Fxn / Fdxn );
            k += 1;
            printf( "\n Iteracao = %d", k ); //exibe a itera��o atual
            printf( "\nx0 = %f\nxn = %f", x0, xn); //exibe os valores de x0 e xn

        } while(Abs(xn-x0)>=E||Abs(Fxn)>=E);

    printf("\n\n xn - x0 = %f\n",xn-x0);
    printf("O resultado final �: %f\n",xn); // x do zero real
    return 0;
}
float Abs( float x )
{
    x = sqrt(x * x);
    return x;
};
