#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>
#include <math.h>

int digitos_nao_usados(long long x);
int multiplicar(int x);
bool validar(int x);
string tipo(long long x);

int main(int argc, char const *argv[])
{
    long long n;

    do
    {
        n = get_long_long("numero: ");
    } while (n < 1);

    int soma = digitos_nao_usados(n);
    bool valido = validar(soma);
    printf("Soma dos digitos usados: %i\n", soma);
    printf("Valido?: %s\n", valido ? "VALIDO!" : "INVALIDO!");
    
    if (valido)
    {
        printf("%s\n", tipo(n));
    }else{
        return 1;
    }
    
    return 0;
}

int digitos_nao_usados(long long x){
    int soma = 0;
    bool alternante = false;
    while (x != 0 )
    {
        int ultimo = x % 10;
        if (alternante)
        {
            int produto = multiplicar(ultimo);
            soma += produto;
        }
        else
        {
            soma += ultimo;
        }
        alternante = !alternante;
        x /= 10;
    }
    return soma;
}

int multiplicar(int x){
    int multiplo = x * 2;
    int soma = 0;
    while (multiplo > 0)
    {
        int ultimo_multiplicado = multiplo % 10;
        soma += ultimo_multiplicado;
        multiplo /= 10;
    }
    return soma;
}

bool validar(int x){
    return x % 10 == 0;
}

string tipo(long long x){
    int cont = 0;
    long long temp = x;
    while (temp != 0)
    {
        temp /= 10;
        cont++;
    }
    int dois = x / pow(10, cont-2);
    int um = x / pow(10, cont-1);

    if ((cont == 15) && (dois == 34 || dois == 37))
    {
        return "AMEX";
    }else if ((cont == 16) && (dois >=51 && dois <= 55))
    {
        return "MASTERCARD";
    }else if ((cont == 13 || cont == 16) && (um == 4))
    {
        return "VISA";
    }else{
        return "nao tenho esse cartao";
    }
    
    
    
}

