#include<stdio.h>

void Triangulo()
{
   printf("Area do Triangulo");
}

void Quadrado()
{
    printf("Area do Quadrado");
}

void Losango()
{
    printf("Area do Losango");
}

void Retangulo()
{
    printf("Area do Retangulo");
}

void Trapezio()
{
    printf("Area do Trapezio");
}

void Circulo()
{
    printf("Area do Circulo");
}

void sair()
{
    printf("Adeus!")
}

int menu(int continuar)
{
    continuar = 0; 
    
    do
    {
        printf("\n 1. Triangulo");
        printf("\n 2. Quadrado");
        printf("\n 3. Losango");
        printf("\n 4. Retangulo");
        printf("\n 5. Trapezio");
        printf("\n 6. Circulo");
        printf("\n 0. sair")

        scanf("%d", &continuar);
        system("cls || clear");

        switch (continuar)
        {
        case 1:

            Triangulo();

            break;
        case 2:

            Quadrado();

            break;

        case 3:

            Losango();

            break;

        case 4:

            Retangulo();

            break;

        case 5:

            Trapezio();

            break;

        case 6:

            Circulo();

            break;

        case 0:

            sair();

            break;

        default:

            printf("\n Digite uma opcao valida");
        }
    } while (continuar);
}

int main()
{

int teste;

teste = continuar();

printf("imprima teste: %d", teste); 


}