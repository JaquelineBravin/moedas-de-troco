#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Variável do tipo foat, com valor decimal
    float valorTotal = get_float("Valor Total: ");
    float valorCompra = get_float("Valor Compra: ");
    float troconovo = 0;

    // Subtrair
    float troco = valorTotal - valorCompra;
    printf("Valor Total do Troco: %.2f\n", valorTotal - valorCompra);
    {
        // Descobrir quantas moedas de R$ 0,25
        float troco25 = troco / 0.25;
        {
            printf("Moedas de R$ 0.25: %.2f\n", floor(troco25));
        }

        // Descobrir quantas moedas de R$ 0,10
        float troco10 = troco - (floor(troco25) * 0.25);
        {
            float troconovo = troco10 / 0.10;
            printf("Moedas de R$ 0,10: %.2f\n", floor(troconovo));
        }

        // Descobrir quantas moedas de R$ 0,05
        float troco05 = troco25 - (floor(troconovo) * 0.10);
        {
            float troconovo05 = troco05 / 0.05;
            printf("Moedas de R$ 0,05: %.2f\n", floor(troconovo05));
        }

        // Descobrir quantas moedas de R$ 0,01
        float troco01 = troco10 - (floor(troco05) * 0.05);
        {
            float troconovo01 = troco01 / 0.01;
            printf("Moedas de R$ 0,01: %.2f\n", floor(troconovo01));
        }
    }
}